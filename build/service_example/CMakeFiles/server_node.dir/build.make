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
include service_example/CMakeFiles/server_node.dir/depend.make

# Include the progress variables for this target.
include service_example/CMakeFiles/server_node.dir/progress.make

# Include the compile flags for this target's objects.
include service_example/CMakeFiles/server_node.dir/flags.make

service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o: service_example/CMakeFiles/server_node.dir/flags.make
service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o: /home/xu/dogkin_ws/src/service_example/src/server_node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o"
	cd /home/xu/dogkin_ws/build/service_example && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server_node.dir/src/server_node.cpp.o -c /home/xu/dogkin_ws/src/service_example/src/server_node.cpp

service_example/CMakeFiles/server_node.dir/src/server_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server_node.dir/src/server_node.cpp.i"
	cd /home/xu/dogkin_ws/build/service_example && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/service_example/src/server_node.cpp > CMakeFiles/server_node.dir/src/server_node.cpp.i

service_example/CMakeFiles/server_node.dir/src/server_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server_node.dir/src/server_node.cpp.s"
	cd /home/xu/dogkin_ws/build/service_example && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/service_example/src/server_node.cpp -o CMakeFiles/server_node.dir/src/server_node.cpp.s

service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o.requires:

.PHONY : service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o.requires

service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o.provides: service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o.requires
	$(MAKE) -f service_example/CMakeFiles/server_node.dir/build.make service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o.provides.build
.PHONY : service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o.provides

service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o.provides.build: service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o


# Object files for target server_node
server_node_OBJECTS = \
"CMakeFiles/server_node.dir/src/server_node.cpp.o"

# External object files for target server_node
server_node_EXTERNAL_OBJECTS =

/home/xu/dogkin_ws/devel/lib/service_example/server_node: service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o
/home/xu/dogkin_ws/devel/lib/service_example/server_node: service_example/CMakeFiles/server_node.dir/build.make
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /opt/ros/kinetic/lib/libroscpp.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /opt/ros/kinetic/lib/librosconsole.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /opt/ros/kinetic/lib/libxmlrpcpp.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /opt/ros/kinetic/lib/libroscpp_serialization.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /opt/ros/kinetic/lib/librostime.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /opt/ros/kinetic/lib/libcpp_common.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/xu/dogkin_ws/devel/lib/service_example/server_node: service_example/CMakeFiles/server_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xu/dogkin_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/xu/dogkin_ws/devel/lib/service_example/server_node"
	cd /home/xu/dogkin_ws/build/service_example && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
service_example/CMakeFiles/server_node.dir/build: /home/xu/dogkin_ws/devel/lib/service_example/server_node

.PHONY : service_example/CMakeFiles/server_node.dir/build

service_example/CMakeFiles/server_node.dir/requires: service_example/CMakeFiles/server_node.dir/src/server_node.cpp.o.requires

.PHONY : service_example/CMakeFiles/server_node.dir/requires

service_example/CMakeFiles/server_node.dir/clean:
	cd /home/xu/dogkin_ws/build/service_example && $(CMAKE_COMMAND) -P CMakeFiles/server_node.dir/cmake_clean.cmake
.PHONY : service_example/CMakeFiles/server_node.dir/clean

service_example/CMakeFiles/server_node.dir/depend:
	cd /home/xu/dogkin_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xu/dogkin_ws/src /home/xu/dogkin_ws/src/service_example /home/xu/dogkin_ws/build /home/xu/dogkin_ws/build/service_example /home/xu/dogkin_ws/build/service_example/CMakeFiles/server_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : service_example/CMakeFiles/server_node.dir/depend

