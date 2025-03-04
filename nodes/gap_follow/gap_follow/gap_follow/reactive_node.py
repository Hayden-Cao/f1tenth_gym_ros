import rclpy
from rclpy.node import Node

import numpy as np
from sensor_msgs.msg import LaserScan
from ackermann_msgs.msg import AckermannDriveStamped
from collections import deque


class ReactiveFollowGap(Node):
    def __init__(self):
        super().__init__('reactive_node')
        self.sub_scan       = self.create_subscription(LaserScan, '/scan', self.lidar_callback, 1)
        self.drive_control  = self.create_publisher(AckermannDriveStamped, '/drive', 1)
        self.ranges_fifo    = deque(maxlen=5)
        self.safety_bubble  = 0.75
        self.prev_angle     = 0.0
        self.pos_deg_ix     = 0
        self.neg_deg_ix     = 0
        self.angle_range    = 90
        
    def preprocess_lidar(self, ranges):
        ranges = np.nan_to_num(ranges, nan=0.0, posinf=3.0, neginf=0.0)
        ranges = np.clip(ranges, 0, 3.0)
        self.ranges_fifo.append(ranges)
        
        return np.mean(self.ranges_fifo, axis = 0)

    def find_max_gap(self, free_space_ranges):

        if np.all(free_space_ranges == 0):
            return [0, len(free_space_ranges) - 1]

        radius = self.safety_bubble + np.min(free_space_ranges[self.neg_deg_ix:self.pos_deg_ix])
        radius = self.safety_bubble + np.min(free_space_ranges)
        free_space_ranges[free_space_ranges < radius] = 0

        start_ix = 0
        max_start_ix = 0
        max_end_ix = 0
        max_gap = 0

        counting_flag = False

        for i in range(len(free_space_ranges)):
            if free_space_ranges[i] != 0:
                if not counting_flag:
                    counting_flag = True
                    start_ix = i
            else:
                if counting_flag:
                    counting_flag = False
                    gap = i - start_ix
                    if gap > max_gap:
                        max_gap = gap
                        max_start_ix = start_ix
                        max_end_ix = i

        if counting_flag:
            gap = len(free_space_ranges) - start_ix
            if gap > max_gap:
                max_start_ix = start_ix
                max_end_ix = len(free_space_ranges)

        return [max_start_ix, max_end_ix]


    
    def find_best_point(self, start_i, end_i):
        drive_ix = ((start_i + end_i) // 2)
        return drive_ix
    
    def smooth_angle(self, angle, alpha=0.05):
        smoothed_angle = alpha * angle + (1 - alpha) * self.prev_angle
        self.prev_angle = smoothed_angle
        return smoothed_angle

    def lidar_callback(self, data: LaserScan):
        ranges = np.array(data.ranges)
        self.pos_deg_ix = int(round((np.radians(self.angle_range) - data.angle_min) / data.angle_increment))
        self.neg_deg_ix = int(round((np.radians(-self.angle_range) - data.angle_min) / data.angle_increment))
        process_lidar = self.preprocess_lidar(ranges)
        
        start_ix, end_ix = self.find_max_gap(process_lidar)
        
        drive_ix = self.find_best_point(start_ix, end_ix)
        
        angle = data.angle_min + data.angle_increment * drive_ix
        angle = self.smooth_angle(angle)

        drive_msg = AckermannDriveStamped()
        
        if np.abs(angle) < np.radians(11):
            velocity = 1.5
        elif np.abs(angle) < np.radians(21):
            velocity = 1.0
        else:
            velocity = 0.5
        
        drive_msg.drive.speed = velocity
        drive_msg.drive.steering_angle = angle
        self.drive_control.publish(drive_msg)
        
        
        
        
def main(args=None):
    rclpy.init(args=args)
    reactive_node = ReactiveFollowGap()
    reactive_node.get_logger().info("Gap Follow Node Initialized")
    rclpy.spin(reactive_node)

    reactive_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()