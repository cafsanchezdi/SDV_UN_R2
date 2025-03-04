import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, GroupAction, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
import yaml

def load_yaml(package_name, file_name):
    """Helper function to load a YAML file from a package."""
    package_path = os.path.join(os.environ['HOME'], 'ros2_ws/src/sdv_un_ros', package_name)
    yaml_file = os.path.join(package_path, file_name)

    if not os.path.exists(yaml_file):
        raise FileNotFoundError(f"YAML file not found: {yaml_file}")

    return yaml_file

def generate_launch_description():
    # Declare arguments
    firebase_arg = DeclareLaunchArgument('firebase', default_value='true', description='Enable Firebase')
    localization_arg = DeclareLaunchArgument('localization', default_value='hector', description='Localization method')

    # Load YAML parameters
    params_file = load_yaml('sdv_nav', 'sdv_params.yaml')

    # Firebase Initializer Node
    firebase_initializer = Node(
        package='sdv_process',
        executable='firebase_initializer.py',
        output='screen',
        parameters=[params_file]
    )

    # Firebase Communication (Conditional)
    firebase_coms = GroupAction([
        Node(
            package='sdv_process',
            executable='firebase_coms_launcher.sh',
            condition=IfCondition(LaunchConfiguration('firebase'))
        )
    ])

    # Include SDV Navigation Launch
    sdv_nav_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([os.path.join(os.environ['HOME'], 'ros2_ws/src/sdv_un_ros/sdv_nav/launch/sdv_nav_launch.py')]),
        launch_arguments={'localization': LaunchConfiguration('localization')}.items()
    )

    return LaunchDescription([
        firebase_arg,
        localization_arg,
        firebase_initializer,
        firebase_coms,
        sdv_nav_launch
    ])

