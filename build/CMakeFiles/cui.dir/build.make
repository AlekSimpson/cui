# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/alek/Desktop/projects/cui

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alek/Desktop/projects/cui/build

# Include any dependencies generated for this target.
include CMakeFiles/cui.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cui.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cui.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cui.dir/flags.make

CMakeFiles/cui.dir/src/src/cui.cpp.o: CMakeFiles/cui.dir/flags.make
CMakeFiles/cui.dir/src/src/cui.cpp.o: ../src/src/cui.cpp
CMakeFiles/cui.dir/src/src/cui.cpp.o: CMakeFiles/cui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/alek/Desktop/projects/cui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cui.dir/src/src/cui.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cui.dir/src/src/cui.cpp.o -MF CMakeFiles/cui.dir/src/src/cui.cpp.o.d -o CMakeFiles/cui.dir/src/src/cui.cpp.o -c /home/alek/Desktop/projects/cui/src/src/cui.cpp

CMakeFiles/cui.dir/src/src/cui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cui.dir/src/src/cui.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/alek/Desktop/projects/cui/src/src/cui.cpp > CMakeFiles/cui.dir/src/src/cui.cpp.i

CMakeFiles/cui.dir/src/src/cui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cui.dir/src/src/cui.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/alek/Desktop/projects/cui/src/src/cui.cpp -o CMakeFiles/cui.dir/src/src/cui.cpp.s

# Object files for target cui
cui_OBJECTS = \
"CMakeFiles/cui.dir/src/src/cui.cpp.o"

# External object files for target cui
cui_EXTERNAL_OBJECTS =

cui: CMakeFiles/cui.dir/src/src/cui.cpp.o
cui: CMakeFiles/cui.dir/build.make
cui: CMakeFiles/cui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/alek/Desktop/projects/cui/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cui"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cui.dir/build: cui
.PHONY : CMakeFiles/cui.dir/build

CMakeFiles/cui.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cui.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cui.dir/clean

CMakeFiles/cui.dir/depend:
	cd /home/alek/Desktop/projects/cui/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alek/Desktop/projects/cui /home/alek/Desktop/projects/cui /home/alek/Desktop/projects/cui/build /home/alek/Desktop/projects/cui/build /home/alek/Desktop/projects/cui/build/CMakeFiles/cui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cui.dir/depend

