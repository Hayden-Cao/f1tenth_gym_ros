#!/usr/bin/env python3
import rclpy
import rclpy._rclpy_signal_handler
from rclpy.node import Node
from geometry_msgs.msg import Twist

class Safety_Auto_Node(Node):

    def __init__(self):
        super().__init__("Automated Safety Node Test")
        self.twist_control = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(0.5, self.move_robot)
        self.move_count

    def move_robot(self):
        msg = Twist()
      
        if self.move_count < 6:  
            msg.linear.x = 0.5  
            msg.angular.z = 0.0
        elif self.move_count < 12:  
            msg.linear.x = 0.0
            msg.angular.z = 1.0  

        self.move_count += 1
        self.publisher_.publish(msg)

        if self.move_count >= 12:
            self.move_count = 0  

def main():
    rclpy.init()
    safety_auto = Safety_Auto_Node()
    print('Hi from safety_auto.')
    rclpy.spin(safety_auto)
    safety_auto.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
