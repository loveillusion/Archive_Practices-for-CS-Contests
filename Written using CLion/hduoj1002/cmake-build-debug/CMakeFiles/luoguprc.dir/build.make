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
CMAKE_SOURCE_DIR = C:\Users\25105\CLionProjects\hduoj1002

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\25105\CLionProjects\hduoj1002\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/luoguprc.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/luoguprc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/luoguprc.dir/flags.make

CMakeFiles/luoguprc.dir/main.cpp.obj: CMakeFiles/luoguprc.dir/flags.make
CMakeFiles/luoguprc.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\25105\CLionProjects\hduoj1002\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/luoguprc.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\luoguprc.dir\main.cpp.obj -c C:\Users\25105\CLionProjects\hduoj1002\main.cpp

CMakeFiles/luoguprc.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/luoguprc.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\25105\CLionProjects\hduoj1002\main.cpp > CMakeFiles\luoguprc.dir\main.cpp.i

CMakeFiles/luoguprc.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/luoguprc.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\25105\CLionProjects\hduoj1002\main.cpp -o CMakeFiles\luoguprc.dir\main.cpp.s

# Object files for target luoguprc
luoguprc_OBJECTS = \
"CMakeFiles/luoguprc.dir/main.cpp.obj"

# External object files for target luoguprc
luoguprc_EXTERNAL_OBJECTS =

luoguprc.exe: CMakeFiles/luoguprc.dir/main.cpp.obj
luoguprc.exe: CMakeFiles/luoguprc.dir/build.make
luoguprc.exe: CMakeFiles/luoguprc.dir/linklibs.rsp
luoguprc.exe: CMakeFiles/luoguprc.dir/objects1.rsp
luoguprc.exe: CMakeFiles/luoguprc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\25105\CLionProjects\hduoj1002\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable luoguprc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\luoguprc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/luoguprc.dir/build: luoguprc.exe

.PHONY : CMakeFiles/luoguprc.dir/build

CMakeFiles/luoguprc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\luoguprc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/luoguprc.dir/clean

CMakeFiles/luoguprc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\25105\CLionProjects\hduoj1002 C:\Users\25105\CLionProjects\hduoj1002 C:\Users\25105\CLionProjects\hduoj1002\cmake-build-debug C:\Users\25105\CLionProjects\hduoj1002\cmake-build-debug C:\Users\25105\CLionProjects\hduoj1002\cmake-build-debug\CMakeFiles\luoguprc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/luoguprc.dir/depend

