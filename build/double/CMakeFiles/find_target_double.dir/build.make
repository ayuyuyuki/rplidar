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
include double/CMakeFiles/find_target_double.dir/depend.make

# Include the progress variables for this target.
include double/CMakeFiles/find_target_double.dir/progress.make

# Include the compile flags for this target's objects.
include double/CMakeFiles/find_target_double.dir/flags.make

double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o: double/CMakeFiles/find_target_double.dir/flags.make
double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o: /home/xu/dogkin_ws/src/double/find_axis\ _double.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o"
	cd /home/xu/dogkin_ws/build/double && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/find_target_double.dir/find_axis__double.cpp.o -c "/home/xu/dogkin_ws/src/double/find_axis _double.cpp"

double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/find_target_double.dir/find_axis__double.cpp.i"
	cd /home/xu/dogkin_ws/build/double && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/xu/dogkin_ws/src/double/find_axis _double.cpp" > CMakeFiles/find_target_double.dir/find_axis__double.cpp.i

double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/find_target_double.dir/find_axis__double.cpp.s"
	cd /home/xu/dogkin_ws/build/double && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/xu/dogkin_ws/src/double/find_axis _double.cpp" -o CMakeFiles/find_target_double.dir/find_axis__double.cpp.s

double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o.requires:

.PHONY : double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o.requires

double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o.provides: double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o.requires
	$(MAKE) -f double/CMakeFiles/find_target_double.dir/build.make double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o.provides.build
.PHONY : double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o.provides

double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o.provides.build: double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o


# Object files for target find_target_double
find_target_double_OBJECTS = \
"CMakeFiles/find_target_double.dir/find_axis__double.cpp.o"

# External object files for target find_target_double
find_target_double_EXTERNAL_OBJECTS =

/home/xu/dogkin_ws/devel/lib/double/find_target_double: double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o
/home/xu/dogkin_ws/devel/lib/double/find_target_double: double/CMakeFiles/find_target_double.dir/build.make
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libcv_bridge.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libimage_transport.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libmessage_filters.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libclass_loader.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/libPocoFoundation.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libdl.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libroslib.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/librospack.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libpython2.7.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libtinyxml.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libroscpp.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/librosconsole.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/librostime.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/libcpp_common.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_stitching3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_superres3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_videostab3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_aruco3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_bgsegm3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_bioinspired3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ccalib3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_cvv3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_dpm3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_face3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_fuzzy3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_hdf3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_img_hash3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_line_descriptor3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_optflow3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_reg3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_rgbd3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_saliency3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_stereo3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_structured_light3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_surface_matching3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_tracking3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xfeatures2d3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ximgproc3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xobjdetect3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xphoto3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_shape3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_photo3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_datasets3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_plot3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_text3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_dnn3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ml3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_video3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_calib3d3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_features2d3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_highgui3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_videoio3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_viz3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_phase_unwrapping3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_flann3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_objdetect3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
/home/xu/dogkin_ws/devel/lib/double/find_target_double: double/CMakeFiles/find_target_double.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xu/dogkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/xu/dogkin_ws/devel/lib/double/find_target_double"
	cd /home/xu/dogkin_ws/build/double && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/find_target_double.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
double/CMakeFiles/find_target_double.dir/build: /home/xu/dogkin_ws/devel/lib/double/find_target_double

.PHONY : double/CMakeFiles/find_target_double.dir/build

double/CMakeFiles/find_target_double.dir/requires: double/CMakeFiles/find_target_double.dir/find_axis__double.cpp.o.requires

.PHONY : double/CMakeFiles/find_target_double.dir/requires

double/CMakeFiles/find_target_double.dir/clean:
	cd /home/xu/dogkin_ws/build/double && $(CMAKE_COMMAND) -P CMakeFiles/find_target_double.dir/cmake_clean.cmake
.PHONY : double/CMakeFiles/find_target_double.dir/clean

double/CMakeFiles/find_target_double.dir/depend:
	cd /home/xu/dogkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xu/dogkin_ws/src /home/xu/dogkin_ws/src/double /home/xu/dogkin_ws/build /home/xu/dogkin_ws/build/double /home/xu/dogkin_ws/build/double/CMakeFiles/find_target_double.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : double/CMakeFiles/find_target_double.dir/depend

