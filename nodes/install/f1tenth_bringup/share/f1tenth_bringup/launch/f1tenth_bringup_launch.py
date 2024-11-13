from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    my_safety_node = Node(
        package='my_safety_node',
        executable='my_safety_node',
        name='emergency_brake',
        parameters=[{'use_sim_time': True}]
    )

    my_wall_follow_node = Node(
        package='my_wall_follow',
        executable='my_wall_follow',
        name='my_wall_follow',
        parameters=[{'use_sim_time': True}]
    )

    ld.add_action(my_safety_node)
    ld.add_action(my_wall_follow_node)

    return ld