# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/xu/dogkin_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xu/dogkin_ws/build

# Include any dependencies generated for this target.
include usb_cam/CMakeFiles/usb_cam2.dir/depend.make

# Include the progress variables for this target.
include usb_cam/CMakeFiles/usb_cam2.dir/progress.make

# Include the compile flags for this target's objects.
include usb_cam/CMakeFiles/usb_cam2.dir/flags.make

usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o: usb_cam/CMakeFiles/usb_cam2.dir/flags.make
usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o: /home/xu/dogkin_ws/src/usb_cam/src/usb_cam.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o"
	cd /home/xu/dogkin_ws/build/usb_cam && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o -c /home/xu/dogkin_ws/src/usb_cam/src/usb_cam.cpp

usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.i"
	cd /home/xu/dogkin_ws/build/usb_cam && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/usb_cam/src/usb_cam.cpp > CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.i

usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.s"
	cd /home/xu/dogkin_ws/build/usb_cam && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/usb_cam/src/usb_cam.cpp -o CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.s

usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o.requires:

.PHONY : usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o.requires

usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o.provides: usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o.requires
	$(MAKE) -f usb_cam/CMakeFiles/usb_cam2.dir/build.make usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o.provides.build
.PHONY : usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o.provides

usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o.provides.build: usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o


# Object files for target usb_cam2
usb_cam2_OBJECTS = \
"CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o"

# External object files for target usb_cam2
usb_cam2_EXTERNAL_OBJECTS =

/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: usb_cam/CMakeFiles/usb_cam2.dir/build.make
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libimage_transport.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libmessage_filters.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libclass_loader.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/libPocoFoundation.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libdl.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libroslib.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/librospack.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libcamera_info_manager.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libcamera_calibration_parsers.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libroscpp.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/librosconsole.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/librostime.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /opt/ros/kinetic/lib/libcpp_common.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/xu/dogkin_ws/devel/lib/libusb_cam2.so: usb_cam/CMakeFiles/usb_cam2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xu/dogkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library /home/xu/dogkin_ws/devel/lib/libusb_cam2.so"
	cd /home/xu/dogkin_ws/build/usb_cam && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/usb_cam2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
usb_cam/CMakeFiles/usb_cam2.dir/build: /home/xu/dogkin_ws/devel/lib/libusb_cam2.so

.PHONY : usb_cam/CMakeFiles/usb_cam2.dir/build

usb_cam/CMakeFiles/usb_cam2.dir/requires: usb_cam/CMakeFiles/usb_cam2.dir/src/usb_cam.cpp.o.requires

.PHONY : usb_cam/CMakeFiles/usb_cam2.dir/requires

usb_cam/CMakeFiles/usb_cam2.dir/clean:
	cd /home/xu/dogkin_ws/build/usb_cam && $(CMAKE_COMMAND) -P CMakeFiles/usb_cam2.dir/cmake_clean.cmake
.PHONY : usb_cam/CMakeFiles/usb_cam2.dir/clean

usb_cam/CMakeFiles/usb_cam2.dir/depend:
	cd /home/xu/dogkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xu/dogkin_ws/src /home/xu/dogkin_ws/src/usb_cam /home/xu/dogkin_ws/build /home/xu/dogkin_ws/build/usb_cam /home/xu/dogkin_ws/build/usb_cam/CMakeFiles/usb_cam2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : usb_cam/CMakeFiles/usb_cam2.dir/depend

