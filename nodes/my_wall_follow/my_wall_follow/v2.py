#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import numpy as np
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from ackermann_msgs.msg import AckermannDriveStamped 

class My_Wall_Follow_Node(Node):
    def __init__(self):
        super().__init__('my_wall_follow_node')
        self.create_subscription(LaserScan, '/scan', self.scan_callback, 1)
        self.drive_control  = self.create_publisher(AckermannDriveStamped, '/drive', 1)

        self.kp                     = 1
        self.kd                     = 0
        self.ki                     = 0
        self.tau                    = 0

        self.integral               = 0.0
        self.prev_error             = 0.0
        self.error                  = 0.0
        self.velocity               = 0.0
        self.derivative             = 0.0
        
        # Values from ros2 topic echo /scan
        self.angle_min              = -2.3499999046325684
        self.angle_max              = 2.3499999046325684
        self.angle_increment        = 0.004351851996034384
        self.range_max              = 30
        self.range_min              = 0
        # Preset Parameters
        self.start_time = 0.0
        self.end_time = 0.0
        self.prev_measurment        = 0.0
        self.current_measurement    = 0.0
        self.angle_A                = np.radians(30)
        self.angle_B                = np.radians(90)
        self.lookahead_dist         = 0.3
        self.target_dist            = 1.0
        self.alpha                  = 0.0
        self.upper_lim_int = 5
        self.lower_lim_int = -5
        self.upper_lim = 10
        self.lower_lim = -10
        

    def get_range(self, range_data, target_angle):
        range_data = np.array(range_data)
        valid_index = np.nonzero(
            (range_data >= self.range_min) & 
            (range_data <= self.range_max) & 
            np.isfinite(range_data)
        )[0]
        
        range_data = range_data[valid_index]
        angle_index = np.arange(len(range_data))
        angle_array = self.angle_min + self.angle_increment * angle_index
        temp = np.abs(angle_array - target_angle)
        index = np.argmin(temp)
        
        return range_data[index]
        

    def get_error(self, range_data, dist):        
        dist_angle_A = self.get_range(range_data, self.angle_A)
        dist_angle_B = self.get_range(range_data, self.angle_B)
        self.current_measurement = dist_angle_B
        theta = self.angle_B - self.angle_A
        
        self.alpha = np.arctan((dist_angle_A * np.cos(theta) - dist_angle_B) / (dist_angle_A * np.sin(theta)))      
        Dt = dist_angle_B * np.sin(self.alpha)
        future_dist = (Dt) + self.lookahead_dist * np.sin(self.alpha)
        error = dist - future_dist
        return error

    def pid_control(self, error, velocity):
        period = np.abs(self.end_time - self.start_time)
        self.integral = self.integral + self.ki * 0.5 * period * (error + self.prev_error)
        
        if(self.integral > self.upper_lim_int):
            self.integral = self.upper_lim_int
        elif (self.integral < self.lower_lim_int):
            self.integral = self.lower_lim_int
            
        self.derivative = -(2 * self.tau * (self.current_measurement - self.prev_measurment) + (2 * self.tau - period) * self.derivative) / (2 * self.tau + period)
        angle = self.kp * error + self.ki * self.integral + self.kd * self.derivative
        
        if(angle > self.upper_lim):
            angle = self.upper_lim
        elif(angle < self.lower_lim):
            angle = self.lower_lim
        
        if np.abs(angle) < np.radians(11):
            self.velocity = velocity 
        elif np.abs(angle) < np.radians(21):
            self.velocity = 2 * velocity / 3 
        else:
            self.velocity = velocity / 3 
            
        drive_msg = AckermannDriveStamped()
        drive_msg.drive.steering_angle = float(-angle)
        drive_msg.drive.steering_angle_velocity = 0.0 #Zero means change the steering angle as quickly as possible
        drive_msg.drive.speed = self.velocity 
        self.drive_control.publish(drive_msg)
        # TODO: fill in drive message and publish

    def scan_callback(self, scan_msg: LaserScan):
        self.start_time = scan_msg.header.stamp.sec + scan_msg.header.stamp.nanosec * 1e-9
        error = self.get_error(scan_msg.ranges,1)
        velocity = 1.5 # TODO: calculate desired car velocity based on error
        self.pid_control(error, velocity) # TODO: actuate the car with PID
        print(f"Error = {error}")
        self.prev_error = error
        self.end_time = scan_msg.header.stamp.sec + scan_msg.header.stamp.nanosec * 1e-9



def main():
    rclpy.init()
    my_wall_follow_node = My_Wall_Follow_Node()
    my_wall_follow_node.get_logger().info("Hayden Cao - Wall Follow Node Initialized")
    rclpy.spin(my_wall_follow_node)
    my_wall_follow_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
