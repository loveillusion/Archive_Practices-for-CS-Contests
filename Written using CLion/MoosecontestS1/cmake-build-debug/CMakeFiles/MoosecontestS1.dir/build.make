# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\25105\CLionProjects\MoosecontestS1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\25105\CLionProjects\MoosecontestS1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MoosecontestS1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MoosecontestS1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MoosecontestS1.dir/flags.make

CMakeFiles/MoosecontestS1.dir/main.cpp.obj: CMakeFiles/MoosecontestS1.dir/flags.make
CMakeFiles/MoosecontestS1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\25105\CLionProjects\MoosecontestS1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MoosecontestS1.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MoosecontestS1.dir\main.cpp.obj -c C:\Users\25105\CLionProjects\MoosecontestS1\main.cpp

CMakeFiles/MoosecontestS1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MoosecontestS1.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\25105\CLionProjects\MoosecontestS1\main.cpp > CMakeFiles\MoosecontestS1.dir\main.cpp.i

CMakeFiles/MoosecontestS1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MoosecontestS1.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\25105\CLionProjects\MoosecontestS1\main.cpp -o CMakeFiles\MoosecontestS1.dir\main.cpp.s

# Object files for target MoosecontestS1
MoosecontestS1_OBJECTS = \
"CMakeFiles/MoosecontestS1.dir/main.cpp.obj"

# External object files for target MoosecontestS1
MoosecontestS1_EXTERNAL_OBJECTS =

MoosecontestS1.exe: CMakeFiles/MoosecontestS1.dir/main.cpp.obj
MoosecontestS1.exe: CMakeFiles/MoosecontestS1.dir/build.make
MoosecontestS1.exe: CMakeFiles/MoosecontestS1.dir/linklibs.rsp
MoosecontestS1.exe: CMakeFiles/MoosecontestS1.dir/objects1.rsp
MoosecontestS1.exe: CMakeFiles/MoosecontestS1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\25105\CLionProjects\MoosecontestS1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MoosecontestS1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MoosecontestS1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MoosecontestS1.dir/build: MoosecontestS1.exe

.PHONY : CMakeFiles/MoosecontestS1.dir/build

CMakeFiles/MoosecontestS1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MoosecontestS1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MoosecontestS1.dir/clean

CMakeFiles/MoosecontestS1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\25105\CLionProjects\MoosecontestS1 C:\Users\25105\CLionProjects\MoosecontestS1 C:\Users\25105\CLionProjects\MoosecontestS1\cmake-build-debug C:\Users\25105\CLionProjects\MoosecontestS1\cmake-build-debug C:\Users\25105\CLionProjects\MoosecontestS1\cmake-build-debug\CMakeFiles\MoosecontestS1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MoosecontestS1.dir/depend

