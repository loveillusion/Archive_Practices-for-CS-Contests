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
CMAKE_SOURCE_DIR = C:\Users\25105\CLionProjects\lgP1603

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\25105\CLionProjects\lgP1603\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lgPa603.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lgPa603.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lgPa603.dir/flags.make

CMakeFiles/lgPa603.dir/main.cpp.obj: CMakeFiles/lgPa603.dir/flags.make
CMakeFiles/lgPa603.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\25105\CLionProjects\lgP1603\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lgPa603.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lgPa603.dir\main.cpp.obj -c C:\Users\25105\CLionProjects\lgP1603\main.cpp

CMakeFiles/lgPa603.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lgPa603.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\25105\CLionProjects\lgP1603\main.cpp > CMakeFiles\lgPa603.dir\main.cpp.i

CMakeFiles/lgPa603.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lgPa603.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\25105\CLionProjects\lgP1603\main.cpp -o CMakeFiles\lgPa603.dir\main.cpp.s

# Object files for target lgPa603
lgPa603_OBJECTS = \
"CMakeFiles/lgPa603.dir/main.cpp.obj"

# External object files for target lgPa603
lgPa603_EXTERNAL_OBJECTS =

lgPa603.exe: CMakeFiles/lgPa603.dir/main.cpp.obj
lgPa603.exe: CMakeFiles/lgPa603.dir/build.make
lgPa603.exe: CMakeFiles/lgPa603.dir/linklibs.rsp
lgPa603.exe: CMakeFiles/lgPa603.dir/objects1.rsp
lgPa603.exe: CMakeFiles/lgPa603.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\25105\CLionProjects\lgP1603\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lgPa603.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lgPa603.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lgPa603.dir/build: lgPa603.exe

.PHONY : CMakeFiles/lgPa603.dir/build

CMakeFiles/lgPa603.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lgPa603.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lgPa603.dir/clean

CMakeFiles/lgPa603.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\25105\CLionProjects\lgP1603 C:\Users\25105\CLionProjects\lgP1603 C:\Users\25105\CLionProjects\lgP1603\cmake-build-debug C:\Users\25105\CLionProjects\lgP1603\cmake-build-debug C:\Users\25105\CLionProjects\lgP1603\cmake-build-debug\CMakeFiles\lgPa603.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lgPa603.dir/depend

