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
CMAKE_SOURCE_DIR = /home/vez/Desktop/masterarbeit/sim/plugins/simulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vez/Desktop/masterarbeit/sim/plugins/build

# Include any dependencies generated for this target.
include CMakeFiles/CTestPresets.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CTestPresets.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CTestPresets.dir/flags.make

CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o: CMakeFiles/CTestPresets.dir/flags.make
CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o: /home/vez/Desktop/masterarbeit/sim/plugins/simulation/CTestPresets.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vez/Desktop/masterarbeit/sim/plugins/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o -c /home/vez/Desktop/masterarbeit/sim/plugins/simulation/CTestPresets.cpp

CMakeFiles/CTestPresets.dir/CTestPresets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CTestPresets.dir/CTestPresets.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vez/Desktop/masterarbeit/sim/plugins/simulation/CTestPresets.cpp > CMakeFiles/CTestPresets.dir/CTestPresets.cpp.i

CMakeFiles/CTestPresets.dir/CTestPresets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CTestPresets.dir/CTestPresets.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vez/Desktop/masterarbeit/sim/plugins/simulation/CTestPresets.cpp -o CMakeFiles/CTestPresets.dir/CTestPresets.cpp.s

CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o.requires:

.PHONY : CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o.requires

CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o.provides: CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o.requires
	$(MAKE) -f CMakeFiles/CTestPresets.dir/build.make CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o.provides.build
.PHONY : CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o.provides

CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o.provides.build: CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o


# Object files for target CTestPresets
CTestPresets_OBJECTS = \
"CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o"

# External object files for target CTestPresets
CTestPresets_EXTERNAL_OBJECTS =

libCTestPresets.so: CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o
libCTestPresets.so: CMakeFiles/CTestPresets.dir/build.make
libCTestPresets.so: CMakeFiles/CTestPresets.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vez/Desktop/masterarbeit/sim/plugins/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library libCTestPresets.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CTestPresets.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CTestPresets.dir/build: libCTestPresets.so

.PHONY : CMakeFiles/CTestPresets.dir/build

CMakeFiles/CTestPresets.dir/requires: CMakeFiles/CTestPresets.dir/CTestPresets.cpp.o.requires

.PHONY : CMakeFiles/CTestPresets.dir/requires

CMakeFiles/CTestPresets.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CTestPresets.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CTestPresets.dir/clean

CMakeFiles/CTestPresets.dir/depend:
	cd /home/vez/Desktop/masterarbeit/sim/plugins/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vez/Desktop/masterarbeit/sim/plugins/simulation /home/vez/Desktop/masterarbeit/sim/plugins/simulation /home/vez/Desktop/masterarbeit/sim/plugins/build /home/vez/Desktop/masterarbeit/sim/plugins/build /home/vez/Desktop/masterarbeit/sim/plugins/build/CMakeFiles/CTestPresets.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CTestPresets.dir/depend

