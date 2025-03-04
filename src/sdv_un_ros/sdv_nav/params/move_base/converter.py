import os
import yaml

# Define the input files and the corresponding Navigation2 sections
ros1_param_files = {
    "base_local_planner_params.yaml": "controller_server",
    "costmap_common_params.yaml": "costmap_common",
    "eband_local_planner_params.yaml": "controller_server",
    "global_costmap_params.yaml": "costmap_global",
    "global_planner_params.yaml": "planner_server",
    "local_costmap_params.yaml": "costmap_local",
    "move_base_params.yaml": "bt_navigator"
}

# Path to your ROS1 parameter folder
ros1_params_dir = os.path.expanduser("~/ros2_ws/src/sdv_un_ros/sdv_nav/params/move_base")

# Output ROS2 parameter file
ros2_params_file = os.path.join(ros1_params_dir, "../nav2_params.yaml")

# Initialize the ROS2 parameter structure
nav2_params = {
    "/**": {
        "ros__parameters": {}
    }
}

# Read each ROS1 parameter file and insert into the correct ROS2 section
for ros1_file, ros2_section in ros1_param_files.items():
    ros1_file_path = os.path.join(ros1_params_dir, ros1_file)

    if os.path.exists(ros1_file_path):
        with open(ros1_file_path, 'r') as f:
            try:
                params = yaml.safe_load(f)
                if params is not None:
                    if ros2_section not in nav2_params["/**"]["ros__parameters"]:
                        nav2_params["/**"]["ros__parameters"][ros2_section] = {}
                    nav2_params["/**"]["ros__parameters"][ros2_section].update(params)
                    print(f"Converted {ros1_file} -> {ros2_section}")
            except yaml.YAMLError as e:
                print(f"Error parsing {ros1_file}: {e}")

# Save the merged ROS2 parameters file
with open(ros2_params_file, 'w') as f:
    yaml.dump(nav2_params, f, default_flow_style=False)

print(f"ROS2 parameters saved to {ros2_params_file}")

