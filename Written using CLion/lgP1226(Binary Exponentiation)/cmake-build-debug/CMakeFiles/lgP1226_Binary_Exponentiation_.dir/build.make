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
CMAKE_SOURCE_DIR = "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/lgP1226_Binary_Exponentiation_.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lgP1226_Binary_Exponentiation_.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lgP1226_Binary_Exponentiation_.dir/flags.make

CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.obj: CMakeFiles/lgP1226_Binary_Exponentiation_.dir/flags.make
CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.obj"
	C:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lgP1226_Binary_Exponentiation_.dir\main.cpp.obj -c "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\main.cpp"

CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.i"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\main.cpp" > CMakeFiles\lgP1226_Binary_Exponentiation_.dir\main.cpp.i

CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.s"
	C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\main.cpp" -o CMakeFiles\lgP1226_Binary_Exponentiation_.dir\main.cpp.s

# Object files for target lgP1226_Binary_Exponentiation_
lgP1226_Binary_Exponentiation__OBJECTS = \
"CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.obj"

# External object files for target lgP1226_Binary_Exponentiation_
lgP1226_Binary_Exponentiation__EXTERNAL_OBJECTS =

lgP1226_Binary_Exponentiation_.exe: CMakeFiles/lgP1226_Binary_Exponentiation_.dir/main.cpp.obj
lgP1226_Binary_Exponentiation_.exe: CMakeFiles/lgP1226_Binary_Exponentiation_.dir/build.make
lgP1226_Binary_Exponentiation_.exe: CMakeFiles/lgP1226_Binary_Exponentiation_.dir/linklibs.rsp
lgP1226_Binary_Exponentiation_.exe: CMakeFiles/lgP1226_Binary_Exponentiation_.dir/objects1.rsp
lgP1226_Binary_Exponentiation_.exe: CMakeFiles/lgP1226_Binary_Exponentiation_.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lgP1226_Binary_Exponentiation_.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lgP1226_Binary_Exponentiation_.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lgP1226_Binary_Exponentiation_.dir/build: lgP1226_Binary_Exponentiation_.exe

.PHONY : CMakeFiles/lgP1226_Binary_Exponentiation_.dir/build

CMakeFiles/lgP1226_Binary_Exponentiation_.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lgP1226_Binary_Exponentiation_.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lgP1226_Binary_Exponentiation_.dir/clean

CMakeFiles/lgP1226_Binary_Exponentiation_.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)" "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)" "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\cmake-build-debug" "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\cmake-build-debug" "C:\Users\25105\CLionProjects\lgP1226(Binary Exponentiation)\cmake-build-debug\CMakeFiles\lgP1226_Binary_Exponentiation_.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/lgP1226_Binary_Exponentiation_.dir/depend

