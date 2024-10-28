#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import numpy as np
from sensor_msgs.msg import LaserScan
from ackermann_msgs.msg import AckermannDriveStamped

class My_Wall_Follow_Node(Node):
    def __init__(self):
        super().__init__('my_wall_follow_node')
        self.create_subscription(LaserScan, '/scan', self.scan_callback, 1)
        self.drive_control  = self.create_publisher(AckermannDriveStamped, '/drive', 1)

        self.kp                  = 5.0
        self.ki                  = 0.6
        self.kd                  = 0.07
        self.tau                 = 0.05
        
        self.derivative          = 0.0
        self.integral            = 0.0

        self.prev_error          = 0.0
        self.error               = 0.0
        self.velocity            = 0.0

        self.angle_A             = np.radians(25)
        self.angle_B             = np.radians(90)
        self.lookahead_dist      = 0.5
        self.target_dist         = 0.9

        self.angle_min           = -2.349999
        self.angle_increment     = 0.0043518

        self.upper_lim_int       = 1.0
        self.lower_lim_int       = -1.0
        
        self.start_time          = 0.0
        self.end_time            = 0.0
        self.prev_measurment     = 0.0
        self.current_measurement = 0.0

    def get_range(self, range_data, target_angle):
        angle_index = np.arange(len(range_data))
        angle_array = self.angle_min + self.angle_increment * angle_index
        temp = np.abs(angle_array - target_angle)
        index = np.argmin(temp)
        
        return range_data[index]
        

    def get_error(self, range_data, dist):

        A = self.get_range(range_data, self.angle_A)
        B = self.get_range(range_data, self.angle_B)

        theta = self.angle_B - self.angle_A
        alpha = np.arctan((A*np.cos(theta) - B) / (A*np.sin(theta)))
        dist_calc = B*np.cos(alpha)
        self.current_measurement = dist_calc
        dist_lookahead = dist_calc + self.lookahead_dist * np.sin(alpha)
        error = dist - dist_lookahead

        return error

    def pid_control(self, error, velocity):

        period = np.abs(self.end_time - self.start_time)
        self.integral = self.integral + 0.5 * period * (error + self.prev_error)
        
        if(self.integral > self.upper_lim_int):
            self.integral = self.upper_lim_int
        elif (self.integral < self.lower_lim_int):
            self.integral = self.lower_lim_int
            
        self.derivative = -(2 * self.tau * (self.current_measurement - self.prev_measurment) + (2 * self.tau - period) * self.derivative) / (2 * self.tau + period)
        angle = self.kp * error + self.ki * self.integral + self.kd * self.derivative
            
        if np.abs(angle) < np.radians(11):
            self.velocity = velocity 
        elif np.abs(angle) < np.radians(21):
            self.velocity = 2*velocity / 3 
        else:
            self.velocity = velocity / 3 

        drive_msg = AckermannDriveStamped()
        drive_msg.drive.steering_angle = -angle
        drive_msg.drive.steering_angle_velocity = 0.0
        drive_msg.drive.speed = self.velocity 
        self.drive_control.publish(drive_msg)



    def scan_callback(self, scan_msg: LaserScan):
        range_data = np.array(scan_msg.ranges)
        valid_index = np.nonzero(
            np.isfinite(range_data)
        )[0]
        valid_data = range_data[valid_index]
        self.error = self.get_error(np.array(valid_data), self.target_dist) 
        velocity = 1.5 
        self.pid_control(self.error, velocity)
        self.prev_error = self.error
        self.prev_measurment = self.current_measurement



def main():
    rclpy.init()
    my_wall_follow_node = My_Wall_Follow_Node()
    my_wall_follow_node.get_logger().info("Hayden Cao - Wall Follow Node Initialized")
    rclpy.spin(my_wall_follow_node)
    my_wall_follow_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
