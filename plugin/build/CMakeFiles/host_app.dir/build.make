# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /workspaces/practice_coding/plugin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/practice_coding/plugin/build

# Include any dependencies generated for this target.
include CMakeFiles/host_app.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/host_app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/host_app.dir/flags.make

CMakeFiles/host_app.dir/main.cpp.o: CMakeFiles/host_app.dir/flags.make
CMakeFiles/host_app.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/practice_coding/plugin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/host_app.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/host_app.dir/main.cpp.o -c /workspaces/practice_coding/plugin/main.cpp

CMakeFiles/host_app.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/host_app.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/practice_coding/plugin/main.cpp > CMakeFiles/host_app.dir/main.cpp.i

CMakeFiles/host_app.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/host_app.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/practice_coding/plugin/main.cpp -o CMakeFiles/host_app.dir/main.cpp.s

# Object files for target host_app
host_app_OBJECTS = \
"CMakeFiles/host_app.dir/main.cpp.o"

# External object files for target host_app
host_app_EXTERNAL_OBJECTS =

host_app: CMakeFiles/host_app.dir/main.cpp.o
host_app: CMakeFiles/host_app.dir/build.make
host_app: CMakeFiles/host_app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/practice_coding/plugin/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable host_app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/host_app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/host_app.dir/build: host_app

.PHONY : CMakeFiles/host_app.dir/build

CMakeFiles/host_app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/host_app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/host_app.dir/clean

CMakeFiles/host_app.dir/depend:
	cd /workspaces/practice_coding/plugin/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/practice_coding/plugin /workspaces/practice_coding/plugin /workspaces/practice_coding/plugin/build /workspaces/practice_coding/plugin/build /workspaces/practice_coding/plugin/build/CMakeFiles/host_app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/host_app.dir/depend
