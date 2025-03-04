#!/usr/bin/env python3
import numpy as np
import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from stop_interfaces.action import StopOrGo
from nav_msgs.msg import Odometry
from sensor_msgs.msg import LaserScan

class SafetyNode(Node):
    def __init__(self):
        super().__init__('safety_node')

        self.velocity = 0.0
        self.tbb = 0.75
        self.create_subscription(LaserScan, 'scan', self.scan_callback, 1)
        self.create_subscription(Odometry, 'ego_racecar/odom', self.odom_callback, 1)
        self.action_client = ActionClient(self, StopOrGo, "stop_or_go")

    def odom_callback(self, odom_msg):
        self.velocity = odom_msg.twist.twist.linear.x

    def scan_callback(self, scan_msg):
        ranges_temp = np.array(scan_msg.ranges)
        range_min = scan_msg.range_min
        range_max = scan_msg.range_max
        angle_min = scan_msg.angle_min
        angle_inc = scan_msg.angle_increment
        range_rate_min = 1e-4

        ranges_temp = np.where((ranges_temp < range_min) | (ranges_temp > range_max) | np.isnan(ranges_temp) | np.isinf(ranges_temp), -1, ranges_temp)
        ranges = ranges_temp[ranges_temp != -1]
        theta_idxs = np.arange(len(ranges_temp))[ranges_temp != -1]
        thetas = angle_min + angle_inc * theta_idxs
        range_rates = self.velocity * np.cos(thetas)
        ttcs = ranges[range_rates > range_rate_min] / range_rates[range_rates > range_rate_min]

        if ttcs.size > 0 and ttcs.min() < self.tbb:
            self.get_logger().info("Sending Stop")
            self.trigger_action_goal(speed=0.0, angle=0.0)

    def trigger_action_goal(self, speed: float, angle: float):
        goal_msg = StopOrGo.Goal()
        goal_msg.speed = speed
        goal_msg.angle = angle
        self.action_client.send_goal_async(goal_msg)



def main(args=None):

    rclpy.init(args=args)
    safety_node = SafetyNode()
    safety_node.get_logger().info("Hayden Cao - Safety Node Initialized")
    rclpy.spin(safety_node)
    safety_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    try:
        main()
    except rclpy.ROSInterruptException:
        pass
