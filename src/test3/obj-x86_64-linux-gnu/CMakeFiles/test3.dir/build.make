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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/xu/dogkin_ws/src/test3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu

# Include any dependencies generated for this target.
include CMakeFiles/test3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test3.dir/flags.make

qrc_images.cpp: ../resources/images/icon.png
qrc_images.cpp: ../resources/images/Camera.png
qrc_images.cpp: ../resources/images/DepthCloud.png
qrc_images.cpp: ../resources/images/display.png
qrc_images.cpp: ../resources/images/Displays.svg
qrc_images.cpp: ../resources/images/png.png
qrc_images.cpp: ../resources/images/visibility.svg
qrc_images.cpp: ../resources/images/power-v.png
qrc_images.cpp: ../resources/images/power.png
qrc_images.cpp: ../resources/images/package.png
qrc_images.cpp: ../resources/images/PointCloud.png
qrc_images.cpp: ../resources/images/plus.png
qrc_images.cpp: ../resources/images/online.png
qrc_images.cpp: ../resources/images/Image.png
qrc_images.cpp: ../resources/images/robot.png
qrc_images.cpp: ../resources/images/options.png
qrc_images.cpp: ../resources/images/Grid.png
qrc_images.cpp: ../resources/images/ok.png
qrc_images.cpp: ../resources/images.qrc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_images.cpp"
	/usr/lib/x86_64-linux-gnu/qt5/bin/rcc --name images --output /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/qrc_images.cpp /home/xu/dogkin_ws/src/test3/resources/images.qrc

ui_main_window.h: ../ui/main_window.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating ui_main_window.h"
	/usr/lib/x86_64-linux-gnu/qt5/bin/uic -o /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/ui_main_window.h /home/xu/dogkin_ws/src/test3/ui/main_window.ui

include/test3/moc_main_window.cpp: ../include/test3/main_window.hpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Generating include/test3/moc_main_window.cpp"
	cd /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3 && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_main_window.cpp_parameters

include/test3/moc_qnode.cpp: ../include/test3/qnode.hpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Generating include/test3/moc_qnode.cpp"
	cd /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3 && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_qnode.cpp_parameters

include/test3/moc_myviz.cpp: ../include/test3/myviz.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Generating include/test3/moc_myviz.cpp"
	cd /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3 && /usr/lib/x86_64-linux-gnu/qt5/bin/moc @/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_myviz.cpp_parameters

CMakeFiles/test3.dir/src/main_window.cpp.o: CMakeFiles/test3.dir/flags.make
CMakeFiles/test3.dir/src/main_window.cpp.o: ../src/main_window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/test3.dir/src/main_window.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test3.dir/src/main_window.cpp.o -c /home/xu/dogkin_ws/src/test3/src/main_window.cpp

CMakeFiles/test3.dir/src/main_window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test3.dir/src/main_window.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/test3/src/main_window.cpp > CMakeFiles/test3.dir/src/main_window.cpp.i

CMakeFiles/test3.dir/src/main_window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test3.dir/src/main_window.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/test3/src/main_window.cpp -o CMakeFiles/test3.dir/src/main_window.cpp.s

CMakeFiles/test3.dir/src/main_window.cpp.o.requires:

.PHONY : CMakeFiles/test3.dir/src/main_window.cpp.o.requires

CMakeFiles/test3.dir/src/main_window.cpp.o.provides: CMakeFiles/test3.dir/src/main_window.cpp.o.requires
	$(MAKE) -f CMakeFiles/test3.dir/build.make CMakeFiles/test3.dir/src/main_window.cpp.o.provides.build
.PHONY : CMakeFiles/test3.dir/src/main_window.cpp.o.provides

CMakeFiles/test3.dir/src/main_window.cpp.o.provides.build: CMakeFiles/test3.dir/src/main_window.cpp.o


CMakeFiles/test3.dir/src/qnode.cpp.o: CMakeFiles/test3.dir/flags.make
CMakeFiles/test3.dir/src/qnode.cpp.o: ../src/qnode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/test3.dir/src/qnode.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test3.dir/src/qnode.cpp.o -c /home/xu/dogkin_ws/src/test3/src/qnode.cpp

CMakeFiles/test3.dir/src/qnode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test3.dir/src/qnode.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/test3/src/qnode.cpp > CMakeFiles/test3.dir/src/qnode.cpp.i

CMakeFiles/test3.dir/src/qnode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test3.dir/src/qnode.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/test3/src/qnode.cpp -o CMakeFiles/test3.dir/src/qnode.cpp.s

CMakeFiles/test3.dir/src/qnode.cpp.o.requires:

.PHONY : CMakeFiles/test3.dir/src/qnode.cpp.o.requires

CMakeFiles/test3.dir/src/qnode.cpp.o.provides: CMakeFiles/test3.dir/src/qnode.cpp.o.requires
	$(MAKE) -f CMakeFiles/test3.dir/build.make CMakeFiles/test3.dir/src/qnode.cpp.o.provides.build
.PHONY : CMakeFiles/test3.dir/src/qnode.cpp.o.provides

CMakeFiles/test3.dir/src/qnode.cpp.o.provides.build: CMakeFiles/test3.dir/src/qnode.cpp.o


CMakeFiles/test3.dir/src/myviz.cpp.o: CMakeFiles/test3.dir/flags.make
CMakeFiles/test3.dir/src/myviz.cpp.o: ../src/myviz.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/test3.dir/src/myviz.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test3.dir/src/myviz.cpp.o -c /home/xu/dogkin_ws/src/test3/src/myviz.cpp

CMakeFiles/test3.dir/src/myviz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test3.dir/src/myviz.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/test3/src/myviz.cpp > CMakeFiles/test3.dir/src/myviz.cpp.i

CMakeFiles/test3.dir/src/myviz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test3.dir/src/myviz.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/test3/src/myviz.cpp -o CMakeFiles/test3.dir/src/myviz.cpp.s

CMakeFiles/test3.dir/src/myviz.cpp.o.requires:

.PHONY : CMakeFiles/test3.dir/src/myviz.cpp.o.requires

CMakeFiles/test3.dir/src/myviz.cpp.o.provides: CMakeFiles/test3.dir/src/myviz.cpp.o.requires
	$(MAKE) -f CMakeFiles/test3.dir/build.make CMakeFiles/test3.dir/src/myviz.cpp.o.provides.build
.PHONY : CMakeFiles/test3.dir/src/myviz.cpp.o.provides

CMakeFiles/test3.dir/src/myviz.cpp.o.provides.build: CMakeFiles/test3.dir/src/myviz.cpp.o


CMakeFiles/test3.dir/src/main.cpp.o: CMakeFiles/test3.dir/flags.make
CMakeFiles/test3.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/test3.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test3.dir/src/main.cpp.o -c /home/xu/dogkin_ws/src/test3/src/main.cpp

CMakeFiles/test3.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test3.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/test3/src/main.cpp > CMakeFiles/test3.dir/src/main.cpp.i

CMakeFiles/test3.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test3.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/test3/src/main.cpp -o CMakeFiles/test3.dir/src/main.cpp.s

CMakeFiles/test3.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/test3.dir/src/main.cpp.o.requires

CMakeFiles/test3.dir/src/main.cpp.o.provides: CMakeFiles/test3.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/test3.dir/build.make CMakeFiles/test3.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/test3.dir/src/main.cpp.o.provides

CMakeFiles/test3.dir/src/main.cpp.o.provides.build: CMakeFiles/test3.dir/src/main.cpp.o


CMakeFiles/test3.dir/qrc_images.cpp.o: CMakeFiles/test3.dir/flags.make
CMakeFiles/test3.dir/qrc_images.cpp.o: qrc_images.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/test3.dir/qrc_images.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test3.dir/qrc_images.cpp.o -c /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/qrc_images.cpp

CMakeFiles/test3.dir/qrc_images.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test3.dir/qrc_images.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/qrc_images.cpp > CMakeFiles/test3.dir/qrc_images.cpp.i

CMakeFiles/test3.dir/qrc_images.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test3.dir/qrc_images.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/qrc_images.cpp -o CMakeFiles/test3.dir/qrc_images.cpp.s

CMakeFiles/test3.dir/qrc_images.cpp.o.requires:

.PHONY : CMakeFiles/test3.dir/qrc_images.cpp.o.requires

CMakeFiles/test3.dir/qrc_images.cpp.o.provides: CMakeFiles/test3.dir/qrc_images.cpp.o.requires
	$(MAKE) -f CMakeFiles/test3.dir/build.make CMakeFiles/test3.dir/qrc_images.cpp.o.provides.build
.PHONY : CMakeFiles/test3.dir/qrc_images.cpp.o.provides

CMakeFiles/test3.dir/qrc_images.cpp.o.provides.build: CMakeFiles/test3.dir/qrc_images.cpp.o


CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o: CMakeFiles/test3.dir/flags.make
CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o: include/test3/moc_main_window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o -c /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_main_window.cpp

CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_main_window.cpp > CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.i

CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_main_window.cpp -o CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.s

CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o.requires:

.PHONY : CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o.requires

CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o.provides: CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o.requires
	$(MAKE) -f CMakeFiles/test3.dir/build.make CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o.provides.build
.PHONY : CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o.provides

CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o.provides.build: CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o


CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o: CMakeFiles/test3.dir/flags.make
CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o: include/test3/moc_qnode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o -c /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_qnode.cpp

CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_qnode.cpp > CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.i

CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_qnode.cpp -o CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.s

CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o.requires:

.PHONY : CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o.requires

CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o.provides: CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o.requires
	$(MAKE) -f CMakeFiles/test3.dir/build.make CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o.provides.build
.PHONY : CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o.provides

CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o.provides.build: CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o


CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o: CMakeFiles/test3.dir/flags.make
CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o: include/test3/moc_myviz.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o -c /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_myviz.cpp

CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_myviz.cpp > CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.i

CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/include/test3/moc_myviz.cpp -o CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.s

CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o.requires:

.PHONY : CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o.requires

CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o.provides: CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o.requires
	$(MAKE) -f CMakeFiles/test3.dir/build.make CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o.provides.build
.PHONY : CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o.provides

CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o.provides.build: CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o


# Object files for target test3
test3_OBJECTS = \
"CMakeFiles/test3.dir/src/main_window.cpp.o" \
"CMakeFiles/test3.dir/src/qnode.cpp.o" \
"CMakeFiles/test3.dir/src/myviz.cpp.o" \
"CMakeFiles/test3.dir/src/main.cpp.o" \
"CMakeFiles/test3.dir/qrc_images.cpp.o" \
"CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o" \
"CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o" \
"CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o"

# External object files for target test3
test3_EXTERNAL_OBJECTS =

devel/lib/test3/test3: CMakeFiles/test3.dir/src/main_window.cpp.o
devel/lib/test3/test3: CMakeFiles/test3.dir/src/qnode.cpp.o
devel/lib/test3/test3: CMakeFiles/test3.dir/src/myviz.cpp.o
devel/lib/test3/test3: CMakeFiles/test3.dir/src/main.cpp.o
devel/lib/test3/test3: CMakeFiles/test3.dir/qrc_images.cpp.o
devel/lib/test3/test3: CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o
devel/lib/test3/test3: CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o
devel/lib/test3/test3: CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o
devel/lib/test3/test3: CMakeFiles/test3.dir/build.make
devel/lib/test3/test3: /opt/ros/kinetic/lib/libcv_bridge.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/librviz.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libOgreOverlay.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libOgreMain.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libGLU.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libGL.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libimage_transport.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libinteractive_markers.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/liblaser_geometry.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libclass_loader.so
devel/lib/test3/test3: /usr/lib/libPocoFoundation.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libdl.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libresource_retriever.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libroslib.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librospack.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libpython2.7.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libtf.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libtf2_ros.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libactionlib.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libmessage_filters.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libtf2.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/liburdf.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liburdfdom_sensor.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liburdfdom_model_state.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liburdfdom_model.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liburdfdom_world.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libtinyxml.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librosconsole_bridge.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libroscpp.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_signals.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librosconsole.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_regex.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libxmlrpcpp.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libroscpp_serialization.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librostime.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libcpp_common.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_system.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_thread.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libpthread.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libcv_bridge.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/librviz.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libOgreOverlay.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libOgreMain.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libGLU.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libGL.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libimage_transport.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libinteractive_markers.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/liblaser_geometry.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libclass_loader.so
devel/lib/test3/test3: /usr/lib/libPocoFoundation.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libdl.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libresource_retriever.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libroslib.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librospack.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libpython2.7.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_program_options.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libtf.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libtf2_ros.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libactionlib.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libmessage_filters.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libtf2.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/liburdf.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liburdfdom_sensor.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liburdfdom_model_state.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liburdfdom_model.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liburdfdom_world.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libtinyxml.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librosconsole_bridge.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libroscpp.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_signals.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librosconsole.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librosconsole_log4cxx.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librosconsole_backend_interface.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_regex.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libxmlrpcpp.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libroscpp_serialization.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/librostime.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/libcpp_common.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_system.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_thread.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_chrono.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libboost_atomic.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libpthread.so
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_stitching3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_superres3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_videostab3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_aruco3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_bgsegm3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_bioinspired3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ccalib3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_cvv3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_dpm3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_face3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_fuzzy3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_hdf3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_img_hash3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_line_descriptor3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_optflow3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_reg3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_rgbd3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_saliency3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_stereo3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_structured_light3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_surface_matching3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_tracking3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xfeatures2d3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ximgproc3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xobjdetect3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_xphoto3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_shape3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_photo3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_datasets3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_plot3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_text3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_dnn3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_ml3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_video3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_calib3d3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_features2d3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_highgui3.so.3.3.1
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.5.1
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.5.1
devel/lib/test3/test3: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.5.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_videoio3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_viz3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_phase_unwrapping3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_flann3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgcodecs3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_objdetect3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_imgproc3.so.3.3.1
devel/lib/test3/test3: /opt/ros/kinetic/lib/x86_64-linux-gnu/libopencv_core3.so.3.3.1
devel/lib/test3/test3: CMakeFiles/test3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable devel/lib/test3/test3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test3.dir/build: devel/lib/test3/test3

.PHONY : CMakeFiles/test3.dir/build

CMakeFiles/test3.dir/requires: CMakeFiles/test3.dir/src/main_window.cpp.o.requires
CMakeFiles/test3.dir/requires: CMakeFiles/test3.dir/src/qnode.cpp.o.requires
CMakeFiles/test3.dir/requires: CMakeFiles/test3.dir/src/myviz.cpp.o.requires
CMakeFiles/test3.dir/requires: CMakeFiles/test3.dir/src/main.cpp.o.requires
CMakeFiles/test3.dir/requires: CMakeFiles/test3.dir/qrc_images.cpp.o.requires
CMakeFiles/test3.dir/requires: CMakeFiles/test3.dir/include/test3/moc_main_window.cpp.o.requires
CMakeFiles/test3.dir/requires: CMakeFiles/test3.dir/include/test3/moc_qnode.cpp.o.requires
CMakeFiles/test3.dir/requires: CMakeFiles/test3.dir/include/test3/moc_myviz.cpp.o.requires

.PHONY : CMakeFiles/test3.dir/requires

CMakeFiles/test3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test3.dir/clean

CMakeFiles/test3.dir/depend: qrc_images.cpp
CMakeFiles/test3.dir/depend: ui_main_window.h
CMakeFiles/test3.dir/depend: include/test3/moc_main_window.cpp
CMakeFiles/test3.dir/depend: include/test3/moc_qnode.cpp
CMakeFiles/test3.dir/depend: include/test3/moc_myviz.cpp
	cd /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/xu/dogkin_ws/src/test3 /home/xu/dogkin_ws/src/test3 /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu /home/xu/dogkin_ws/src/test3/obj-x86_64-linux-gnu/CMakeFiles/test3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test3.dir/depend
