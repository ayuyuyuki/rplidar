cmake_minimum_required(VERSION 2.8.3)
project(test3)
add_compile_options(-std=c++11)

set(CMAKE_INCLUDE_CURRENT_DIR ON)#added

find_package(catkin REQUIRED COMPONENTS   geometry_msgs std_msgs sensor_msgs  cv_bridge image_transport roscpp rviz)#deleted qt_build added rviz
find_package(Qt5 REQUIRED Core Widgets)#added
find_package(OpenCV REQUIRED)
set(QT_LIBRARIES Qt5::Widgets)#added


#rosbuild_prepare_qt4(QtCore QtGui) #deleted

file(GLOB QT_FORMS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} ui/*.ui)
file(GLOB QT_RESOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} resources/*.qrc)
file(GLOB_RECURSE QT_MOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS include/test3/*.hpp *.h)#added *.h

QT5_ADD_RESOURCES(QT_RESOURCES_CPP ${QT_RESOURCES})
QT5_WRAP_UI(QT_FORMS_HPP ${QT_FORMS})
QT5_WRAP_CPP(QT_MOC_HPP ${QT_MOC}) #change QT4 to QT5
include_directories(include ${catkin_INCLUDE_DIRS}
        ${OpenCV_INCLUDE_DIRS})

catkin_package()
file(GLOB_RECURSE QT_SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} FOLLOW_SYMLINKS src/*.cpp)

add_executable(test3 ${QT_SOURCES} ${QT_RESOURCES_CPP} ${QT_FORMS_HPP} ${QT_MOC_HPP})
target_link_libraries(test3 ${QT_LIBRARIES} ${catkin_LIBRARIES})
target_link_libraries(test3 ${QT_LIBRARIES} ${catkin_LIBRARIES} ${OpenCV_LIBRARIES})
install(TARGETS test3 RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})
