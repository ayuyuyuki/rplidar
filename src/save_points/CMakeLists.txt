cmake_minimum_required(VERSION 2.8.3)
project(save_points)

## Compile as C++11, supported in ROS Kinetic and newer
# add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
find_package(catkin REQUIRED
    geometry_msgs
roscpp
std_msgs
)
catkin_package(CATKIN_DEPENDS roscpp std_msgs )

include_directories(
  ${catkin_INCLUDE_DIRS}
)



add_executable(save_point save_points.cpp)
target_link_libraries(save_point
   ${catkin_LIBRARIES}
 )
