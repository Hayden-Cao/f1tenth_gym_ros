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
        self.create_subscription(LaserScan, '/scan', self.get_range, 1)
        self.create_subscription(Odometry, 'ego_racecar/odom', self.read_speed, 1)
        self.drive_control  = self.create_publisher(AckermannDriveStamped, '/drive', 1)

        self.kp         = 0.0
        self.kd         = 0.0
        self.ki         = 0.0

        self.integral   = 0.0
        self.prev_error = 0.0
        self.error      = 0.0
        self.velocity   = 0.0
        self.angleA = 30
        self.angleB = 90


    def get_range(self, scan_msg: LaserScan, angle):
        raw_ranges = np.array(scan_msg.ranges)
        angle_radians = np.radians(angle)
        index_angle_rad = np.round(angle_radians - scan_msg.angle_min / scan_msg.angle_increment)

        if(np.isfinite(raw_ranges[index_angle_rad])):
            return raw_ranges[index_angle_rad]
        else:
            return -1
            

    
    def get_error(self, scan_msg: LaserScan, dist):
        A = self.get_range(scan_msg, self.angleA)
        B = self.get_range(scan_msg, self.angleB)

        theta = np.abs(np.radians(self.angleA - self.angleB))
        alpha = np.arctan((A*np.cos(theta) - B) / (A*np.sin(theta)))
        dist_calc = B*np.cos(alpha)
        error = dist - dist_calc

        return error



    
    def pid_control(self, error, velocity):
        drive_msg = AckermannDriveStamped()

    def scan_callback(self, scan_msg: LaserScan):
        self.pid_control(self.get_error(), self.velocity)




def main():
    rclpy.init()
    my_wall_follow_node = My_Wall_Follow_Node()
    my_wall_follow_node.get_logger().info("Hayden Cao - Wall Follow Node Initialized")
    rclpy.spin(my_wall_follow_node)
    my_wall_follow_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
