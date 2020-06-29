cmake_minimum_required(VERSION 2.8.3)
project(double)

find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
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



add_executable(find_target_double find_axis\ _double.cpp)
target_link_libraries(find_target_double
   ${catkin_LIBRARIES}
   ${OpenCV_LIBRARIES}
 )
add_executable(find_second find_second.cpp)
target_link_libraries(find_second
   ${catkin_LIBRARIES}
   ${OpenCV_LIBRARIES}
 )

add_executable(movement movement.cpp)
target_link_libraries(movement
   ${catkin_LIBRARIES}
 )

include_directories(${catkin_INCLUDE_DIRS} ${OpenCV_INCLUDE_DIRS})
