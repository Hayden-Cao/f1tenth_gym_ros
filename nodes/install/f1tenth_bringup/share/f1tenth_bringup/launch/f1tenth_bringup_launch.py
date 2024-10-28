from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    safety_node = Node(
        package='safety_node',
        executable='safety_node',
        name='emergency_brake',
        parameter=[{'use_sim_time': True}]
    )

    wall_follow_node = Node(
        package='wall_follow',
        executable='wall_follow',
        name='wall_follow',
        parameter=[{'use_sim_time': True}]
    )

    ld.add_action(safety_node)
    ld.add_action(wall_follow_node)

    return ld