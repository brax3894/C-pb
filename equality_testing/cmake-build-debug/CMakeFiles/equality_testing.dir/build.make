# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\dieha\CLionProjects\equality_testing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dieha\CLionProjects\equality_testing\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/equality_testing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/equality_testing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/equality_testing.dir/flags.make

CMakeFiles/equality_testing.dir/main.cpp.obj: CMakeFiles/equality_testing.dir/flags.make
CMakeFiles/equality_testing.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dieha\CLionProjects\equality_testing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/equality_testing.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\equality_testing.dir\main.cpp.obj -c C:\Users\dieha\CLionProjects\equality_testing\main.cpp

CMakeFiles/equality_testing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/equality_testing.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dieha\CLionProjects\equality_testing\main.cpp > CMakeFiles\equality_testing.dir\main.cpp.i

CMakeFiles/equality_testing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/equality_testing.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dieha\CLionProjects\equality_testing\main.cpp -o CMakeFiles\equality_testing.dir\main.cpp.s

# Object files for target equality_testing
equality_testing_OBJECTS = \
"CMakeFiles/equality_testing.dir/main.cpp.obj"

# External object files for target equality_testing
equality_testing_EXTERNAL_OBJECTS =

equality_testing.exe: CMakeFiles/equality_testing.dir/main.cpp.obj
equality_testing.exe: CMakeFiles/equality_testing.dir/build.make
equality_testing.exe: CMakeFiles/equality_testing.dir/linklibs.rsp
equality_testing.exe: CMakeFiles/equality_testing.dir/objects1.rsp
equality_testing.exe: CMakeFiles/equality_testing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dieha\CLionProjects\equality_testing\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable equality_testing.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\equality_testing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/equality_testing.dir/build: equality_testing.exe

.PHONY : CMakeFiles/equality_testing.dir/build

CMakeFiles/equality_testing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\equality_testing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/equality_testing.dir/clean

CMakeFiles/equality_testing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dieha\CLionProjects\equality_testing C:\Users\dieha\CLionProjects\equality_testing C:\Users\dieha\CLionProjects\equality_testing\cmake-build-debug C:\Users\dieha\CLionProjects\equality_testing\cmake-build-debug C:\Users\dieha\CLionProjects\equality_testing\cmake-build-debug\CMakeFiles\equality_testing.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/equality_testing.dir/depend
