# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/luobin2/practice/C++/example1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luobin2/practice/C++/example1/build

# Include any dependencies generated for this target.
include CMakeFiles/opencv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/opencv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/opencv.dir/flags.make

CMakeFiles/opencv.dir/example.o: CMakeFiles/opencv.dir/flags.make
CMakeFiles/opencv.dir/example.o: ../example.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/luobin2/practice/C++/example1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/opencv.dir/example.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/opencv.dir/example.o -c /home/luobin2/practice/C++/example1/example.cpp

CMakeFiles/opencv.dir/example.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv.dir/example.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/luobin2/practice/C++/example1/example.cpp > CMakeFiles/opencv.dir/example.i

CMakeFiles/opencv.dir/example.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv.dir/example.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/luobin2/practice/C++/example1/example.cpp -o CMakeFiles/opencv.dir/example.s

CMakeFiles/opencv.dir/example.o.requires:
.PHONY : CMakeFiles/opencv.dir/example.o.requires

CMakeFiles/opencv.dir/example.o.provides: CMakeFiles/opencv.dir/example.o.requires
	$(MAKE) -f CMakeFiles/opencv.dir/build.make CMakeFiles/opencv.dir/example.o.provides.build
.PHONY : CMakeFiles/opencv.dir/example.o.provides

CMakeFiles/opencv.dir/example.o.provides.build: CMakeFiles/opencv.dir/example.o

# Object files for target opencv
opencv_OBJECTS = \
"CMakeFiles/opencv.dir/example.o"

# External object files for target opencv
opencv_EXTERNAL_OBJECTS =

opencv: CMakeFiles/opencv.dir/example.o
opencv: CMakeFiles/opencv.dir/build.make
opencv: CMakeFiles/opencv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable opencv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/opencv.dir/build: opencv
.PHONY : CMakeFiles/opencv.dir/build

CMakeFiles/opencv.dir/requires: CMakeFiles/opencv.dir/example.o.requires
.PHONY : CMakeFiles/opencv.dir/requires

CMakeFiles/opencv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/opencv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/opencv.dir/clean

CMakeFiles/opencv.dir/depend:
	cd /home/luobin2/practice/C++/example1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luobin2/practice/C++/example1 /home/luobin2/practice/C++/example1 /home/luobin2/practice/C++/example1/build /home/luobin2/practice/C++/example1/build /home/luobin2/practice/C++/example1/build/CMakeFiles/opencv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/opencv.dir/depend

