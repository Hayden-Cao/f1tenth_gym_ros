import rclpy
from rclpy.node import Node
import numpy as np
from sensor_msgs.msg import LaserScan
from ackermann_msgs.msg import AckermannDriveStamped
from rclpy.action import ActionClient
from stop_interfaces.action import StopOrGo

class WallFollow(Node):
    def __init__(self):
        super().__init__('wall_follow_node')
        lidarscan_topic = '/scan'
        drive_topic = '/drive'
        self.sub_scan = self.create_subscription(LaserScan, lidarscan_topic, self.scan_callback, 1)
        self.pub_drive = self.create_publisher(AckermannDriveStamped, drive_topic, 1)
        self.kp = 0.255
        self.ki = -0.028
        self.kd = 0.55
        self.error = 0
        self.integral = 0
        self.prev_error = 0
        self.velocity = 0.0
        self.dist = 1.0
        self.lookahead_dist = 0.3
        self.A_angle = np.radians(30)
        self.B_angle = np.radians(90)
        self.action_client = ActionClient(self, StopOrGo, 'stop_or_go')

    def get_range(self, range_data, angle_data, angle):
        diff_array = np.absolute(angle_data - angle)
        np.absolute(diff_array)
        index = diff_array.argmin()
        return range_data[index] 

    def get_error(self, range_data, angle_data, dist):
        A_dist = self.get_range(range_data, angle_data, self.A_angle)
        B_dist = self.get_range(range_data, angle_data, self.B_angle)
        theta = self.B_angle - self.A_angle
        alpha = np.arctan((A_dist * np.cos(theta) - B_dist) / (A_dist * np.sin(theta)))
        current_dist = B_dist * np.cos(alpha)
        error = dist - current_dist
        future_dist = current_dist + self.lookahead_dist * np.sin(alpha)
        self.integral = self.dist - current_dist
        self.prev_error = -self.velocity * np.sin(alpha)
        return error 

    def pid_control(self, error):
        angle = self.kp * error + self.ki * self.integral + self.kd * self.prev_error 
        if np.abs(angle) < np.radians(11):
            self.velocity = 1.5
        elif np.abs(angle) < np.radians(21):
            self.velocity = 1.0
        else:
            self.velocity = 0.5
        
        self.trigger_action_goal(speed=self.velocity, angle=-angle)

    def scan_callback(self, scan_msg):
        ranges_temp = np.array(scan_msg.ranges)
        range_min = scan_msg.range_min
        range_max = scan_msg.range_max
        angle_min = scan_msg.angle_min
        angle_inc = scan_msg.angle_increment
        ranges_temp = np.where((ranges_temp < range_min) | (ranges_temp > range_max) | np.isnan(ranges_temp) | np.isinf(ranges_temp), -1, ranges_temp)
        ranges = ranges_temp[ranges_temp != -1]
        theta_idxs = np.arange(len(ranges_temp))[ranges_temp != -1]
        thetas = angle_min + angle_inc * theta_idxs
        error = self.get_error(ranges, thetas, self.dist)
        self.pid_control(error)

    def trigger_action_goal(self, speed: float, angle: float):
        goal_msg = StopOrGo.Goal()
        goal_msg.speed = speed
        goal_msg.angle = angle
        self.action_client.send_goal_async(goal_msg)

def main(args=None):
    rclpy.init(args=args)
    wall_follow_node = WallFollow()
    wall_follow_node.get_logger().info("Hayden Cao - Wall Follow Initialized")
    rclpy.spin(wall_follow_node)
    wall_follow_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    try:
        main()
    except rclpy.ROSInterruptException:
        pass
