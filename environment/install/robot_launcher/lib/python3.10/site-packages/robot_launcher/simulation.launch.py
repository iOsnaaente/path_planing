# launch/system_launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_visualizer',
            executable='robot_visualizer',
            name='visualizer',
        ),
        Node(
            package='robot_planner',
            executable='robot_planner',
            name='planner',
        ),
        Node(
            package='robot_kinematic',
            executable='robot_kinematic',
            name='kinematic',
        ),
    ])
