cmake_minimum_required(VERSION 3.8)
project(robot_planner)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(custom_messages REQUIRED)


add_executable( robot_planner src/robot_planner.cpp)
ament_target_dependencies(
  robot_planner 
  rclcpp 
  custom_messages 
  geometry_msgs
)

install(
  TARGETS
  robot_planner
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
