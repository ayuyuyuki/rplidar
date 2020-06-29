cmake_minimum_required(VERSION 2.8.3)
project(try)

find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  image_transport
  roscpp
  sensor_msgs
  std_msgs
  )

find_package( OpenCV REQUIRED )

catkin_package(CATKIN_DEPENDS roscpp std_msgs sensor_msgs)

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(sample_cv_bridge_node find_axis.cpp)

target_link_libraries(sample_cv_bridge_node
   ${catkin_LIBRARIES}
   ${OpenCV_LIBRARIES}
 )

include_directories(${catkin_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS})
