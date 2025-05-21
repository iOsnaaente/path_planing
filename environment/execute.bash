#!/usr/bin/env bash

# Descobre o diretório do workspace
WORKSPACE_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

# Source no setup do ROS 2 e do workspace
source /opt/ros/humble/setup.bash
source "$WORKSPACE_DIR/install/setup.bash"

# Lança o seu sistema completo
ros2 launch robot_launcher simulation.launch.py
