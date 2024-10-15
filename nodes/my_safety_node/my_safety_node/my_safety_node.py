#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import numpy as np
from sensor_msgs.msg import LaserScan
from nav_msgs.msg import Odometry
from ackermann_msgs.msg import AckermannDriveStamped

class My_Safety_Node(Node):

    def __init__(self):
        super().__init__('my_safety_node')
        # Topic names derived from the f1tenth_gym_ros github repo: https://github.com/f1tenth/f1tenth_gym_ros/blob/main/README.md
        self.create_subscription(LaserScan, '/scan', self.read_distance, 1)
        self.create_subscription(Odometry, 'ego_racecar/odom', self.read_speed, 1)
        self.drive_control  = self.create_publisher(AckermannDriveStamped, '/drive', 1)

        self.velocity       = 0
        self.threshold      = 0


    def read_speed(self, odom_msg: Odometry):
        self.velocity = odom_msg.twist.twist.linear.x
        self.threshold = (self.velocity / 8.26) + 0.7

    def publish_speed(self, time_to_collision):
        ack = AckermannDriveStamped()
        ack.drive.speed = 0.0
        self.drive_control.publish(ack)
        print(f"TTC = {time_to_collision} s")
        print(f'Emergency Brake Activated')
            

    def read_distance(self, scan_msg: LaserScan):
        raw_ranges = np.array(scan_msg.ranges)

        valid_index = np.nonzero(
            (raw_ranges >= scan_msg.range_min) & 
            (raw_ranges <= scan_msg.range_max) & 
            np.isfinite(raw_ranges)
        )[0]

        filt_dist = raw_ranges[valid_index]
        rates = np.cos(scan_msg.angle_increment * valid_index + scan_msg.angle_min) * self.velocity
        valid_rates_bitmask = rates > 1e-4

        if valid_rates_bitmask.any():
            iTTC = filt_dist[valid_rates_bitmask] / rates[valid_rates_bitmask]
            min_iTTC = np.min(iTTC)
        else:
            min_iTTC = np.inf

        self.publish_speed(min_iTTC) if min_iTTC < self.threshold else None

def main():
    rclpy.init()
    my_safety_node = My_Safety_Node()
    my_safety_node.get_logger().info("Hayden Cao - Safety Node Initialized")
    rclpy.spin(my_safety_node)
    my_safety_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
