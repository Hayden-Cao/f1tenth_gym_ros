import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.action.server import ServerGoalHandle
from stop_interfaces.action import StopOrGo
import numpy as np
from sensor_msgs.msg import LaserScan
from ackermann_msgs.msg import AckermannDriveStamped

class StopOrGoServerNode(Node):
    def __init__(self):
        super().__init__("stop_or_go_server")
        self.stop_active = False
        self.dist_threshold = 0.35
        self.smallest_dist = float('inf')
        self.create_subscription(LaserScan, '/scan', self.scan_callback, 1)
        self.drive_control = self.create_publisher(AckermannDriveStamped, '/drive', 1)
        self.stop_or_go_server = ActionServer(self, StopOrGo, "stop_or_go", execute_callback=self.execute_callback)

    def execute_callback(self, goal_handle: ServerGoalHandle):
        result = StopOrGo.Result()

        if goal_handle.request.speed == 0.0:
            self.stop_vehicle()
            self.stop_active = True
        else:
            if self.stop_active == True and self.smallest_dist < self.dist_threshold:
                self.stop_vehicle()
            else:
                self.stop_active = False
                self.drive_vehicle(goal_handle.request.speed, goal_handle.request.angle)

        goal_handle.succeed()
        result.success = True
        return result

    def stop_vehicle(self):
        drive_msg = AckermannDriveStamped()
        drive_msg.drive.speed = 0.0
        self.drive_control.publish(drive_msg)

    def drive_vehicle(self, speed, angle):
        drive_msg = AckermannDriveStamped()
        drive_msg.drive.speed = speed
        drive_msg.drive.steering_angle = angle
        self.drive_control.publish(drive_msg)

    def scan_callback(self, scan_msg: LaserScan):
        dist = np.array(scan_msg.ranges)
        dist = dist[dist > 0]
        if dist.size == 0:
            self.smallest_dist = float('inf')
        else:
            self.smallest_dist = np.min(dist)

def main(args=None):
    rclpy.init(args=args)
    stop_or_go_node = StopOrGoServerNode()
    stop_or_go_node.get_logger().info("StopOrGoServerNode Initialized")
    rclpy.spin(stop_or_go_node)
    stop_or_go_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    try:
        main()
    except rclpy.ROSInterruptException:
        pass
