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
CMAKE_SOURCE_DIR = /home/luobin2/practice/C++/example9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luobin2/practice/C++/example9/build

# Include any dependencies generated for this target.
include CMakeFiles/example9.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/example9.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/example9.dir/flags.make

CMakeFiles/example9.dir/src/main.o: CMakeFiles/example9.dir/flags.make
CMakeFiles/example9.dir/src/main.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/luobin2/practice/C++/example9/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/example9.dir/src/main.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example9.dir/src/main.o -c /home/luobin2/practice/C++/example9/src/main.cpp

CMakeFiles/example9.dir/src/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example9.dir/src/main.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/luobin2/practice/C++/example9/src/main.cpp > CMakeFiles/example9.dir/src/main.i

CMakeFiles/example9.dir/src/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example9.dir/src/main.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/luobin2/practice/C++/example9/src/main.cpp -o CMakeFiles/example9.dir/src/main.s

CMakeFiles/example9.dir/src/main.o.requires:
.PHONY : CMakeFiles/example9.dir/src/main.o.requires

CMakeFiles/example9.dir/src/main.o.provides: CMakeFiles/example9.dir/src/main.o.requires
	$(MAKE) -f CMakeFiles/example9.dir/build.make CMakeFiles/example9.dir/src/main.o.provides.build
.PHONY : CMakeFiles/example9.dir/src/main.o.provides

CMakeFiles/example9.dir/src/main.o.provides.build: CMakeFiles/example9.dir/src/main.o

CMakeFiles/example9.dir/src/Sales_data.o: CMakeFiles/example9.dir/flags.make
CMakeFiles/example9.dir/src/Sales_data.o: ../src/Sales_data.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/luobin2/practice/C++/example9/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/example9.dir/src/Sales_data.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/example9.dir/src/Sales_data.o -c /home/luobin2/practice/C++/example9/src/Sales_data.cpp

CMakeFiles/example9.dir/src/Sales_data.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example9.dir/src/Sales_data.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/luobin2/practice/C++/example9/src/Sales_data.cpp > CMakeFiles/example9.dir/src/Sales_data.i

CMakeFiles/example9.dir/src/Sales_data.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example9.dir/src/Sales_data.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/luobin2/practice/C++/example9/src/Sales_data.cpp -o CMakeFiles/example9.dir/src/Sales_data.s

CMakeFiles/example9.dir/src/Sales_data.o.requires:
.PHONY : CMakeFiles/example9.dir/src/Sales_data.o.requires

CMakeFiles/example9.dir/src/Sales_data.o.provides: CMakeFiles/example9.dir/src/Sales_data.o.requires
	$(MAKE) -f CMakeFiles/example9.dir/build.make CMakeFiles/example9.dir/src/Sales_data.o.provides.build
.PHONY : CMakeFiles/example9.dir/src/Sales_data.o.provides

CMakeFiles/example9.dir/src/Sales_data.o.provides.build: CMakeFiles/example9.dir/src/Sales_data.o

# Object files for target example9
example9_OBJECTS = \
"CMakeFiles/example9.dir/src/main.o" \
"CMakeFiles/example9.dir/src/Sales_data.o"

# External object files for target example9
example9_EXTERNAL_OBJECTS =

example9: CMakeFiles/example9.dir/src/main.o
example9: CMakeFiles/example9.dir/src/Sales_data.o
example9: CMakeFiles/example9.dir/build.make
example9: CMakeFiles/example9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable example9"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/example9.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/example9.dir/build: example9
.PHONY : CMakeFiles/example9.dir/build

CMakeFiles/example9.dir/requires: CMakeFiles/example9.dir/src/main.o.requires
CMakeFiles/example9.dir/requires: CMakeFiles/example9.dir/src/Sales_data.o.requires
.PHONY : CMakeFiles/example9.dir/requires

CMakeFiles/example9.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/example9.dir/cmake_clean.cmake
.PHONY : CMakeFiles/example9.dir/clean

CMakeFiles/example9.dir/depend:
	cd /home/luobin2/practice/C++/example9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luobin2/practice/C++/example9 /home/luobin2/practice/C++/example9 /home/luobin2/practice/C++/example9/build /home/luobin2/practice/C++/example9/build /home/luobin2/practice/C++/example9/build/CMakeFiles/example9.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/example9.dir/depend

