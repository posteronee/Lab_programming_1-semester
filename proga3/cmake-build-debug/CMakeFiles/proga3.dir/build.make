# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nikitaivanov/Desktop/прога/proga3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nikitaivanov/Desktop/прога/proga3/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/proga3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/proga3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proga3.dir/flags.make

CMakeFiles/proga3.dir/proga3.c.o: CMakeFiles/proga3.dir/flags.make
CMakeFiles/proga3.dir/proga3.c.o: ../proga3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nikitaivanov/Desktop/прога/proga3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/proga3.dir/proga3.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/proga3.dir/proga3.c.o -c /Users/nikitaivanov/Desktop/прога/proga3/proga3.c

CMakeFiles/proga3.dir/proga3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proga3.dir/proga3.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/nikitaivanov/Desktop/прога/proga3/proga3.c > CMakeFiles/proga3.dir/proga3.c.i

CMakeFiles/proga3.dir/proga3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proga3.dir/proga3.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/nikitaivanov/Desktop/прога/proga3/proga3.c -o CMakeFiles/proga3.dir/proga3.c.s

# Object files for target proga3
proga3_OBJECTS = \
"CMakeFiles/proga3.dir/proga3.c.o"

# External object files for target proga3
proga3_EXTERNAL_OBJECTS =

proga3: CMakeFiles/proga3.dir/proga3.c.o
proga3: CMakeFiles/proga3.dir/build.make
proga3: CMakeFiles/proga3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nikitaivanov/Desktop/прога/proga3/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable proga3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/proga3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proga3.dir/build: proga3
.PHONY : CMakeFiles/proga3.dir/build

CMakeFiles/proga3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/proga3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/proga3.dir/clean

CMakeFiles/proga3.dir/depend:
	cd /Users/nikitaivanov/Desktop/прога/proga3/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nikitaivanov/Desktop/прога/proga3 /Users/nikitaivanov/Desktop/прога/proga3 /Users/nikitaivanov/Desktop/прога/proga3/cmake-build-debug /Users/nikitaivanov/Desktop/прога/proga3/cmake-build-debug /Users/nikitaivanov/Desktop/прога/proga3/cmake-build-debug/CMakeFiles/proga3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/proga3.dir/depend

