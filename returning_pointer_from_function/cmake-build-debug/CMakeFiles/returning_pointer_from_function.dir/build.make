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
CMAKE_SOURCE_DIR = C:\Users\dieha\CLionProjects\returning_pointer_from_function

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dieha\CLionProjects\returning_pointer_from_function\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/returning_pointer_from_function.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/returning_pointer_from_function.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/returning_pointer_from_function.dir/flags.make

CMakeFiles/returning_pointer_from_function.dir/main.cpp.obj: CMakeFiles/returning_pointer_from_function.dir/flags.make
CMakeFiles/returning_pointer_from_function.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dieha\CLionProjects\returning_pointer_from_function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/returning_pointer_from_function.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\returning_pointer_from_function.dir\main.cpp.obj -c C:\Users\dieha\CLionProjects\returning_pointer_from_function\main.cpp

CMakeFiles/returning_pointer_from_function.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/returning_pointer_from_function.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dieha\CLionProjects\returning_pointer_from_function\main.cpp > CMakeFiles\returning_pointer_from_function.dir\main.cpp.i

CMakeFiles/returning_pointer_from_function.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/returning_pointer_from_function.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dieha\CLionProjects\returning_pointer_from_function\main.cpp -o CMakeFiles\returning_pointer_from_function.dir\main.cpp.s

# Object files for target returning_pointer_from_function
returning_pointer_from_function_OBJECTS = \
"CMakeFiles/returning_pointer_from_function.dir/main.cpp.obj"

# External object files for target returning_pointer_from_function
returning_pointer_from_function_EXTERNAL_OBJECTS =

returning_pointer_from_function.exe: CMakeFiles/returning_pointer_from_function.dir/main.cpp.obj
returning_pointer_from_function.exe: CMakeFiles/returning_pointer_from_function.dir/build.make
returning_pointer_from_function.exe: CMakeFiles/returning_pointer_from_function.dir/linklibs.rsp
returning_pointer_from_function.exe: CMakeFiles/returning_pointer_from_function.dir/objects1.rsp
returning_pointer_from_function.exe: CMakeFiles/returning_pointer_from_function.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dieha\CLionProjects\returning_pointer_from_function\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable returning_pointer_from_function.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\returning_pointer_from_function.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/returning_pointer_from_function.dir/build: returning_pointer_from_function.exe

.PHONY : CMakeFiles/returning_pointer_from_function.dir/build

CMakeFiles/returning_pointer_from_function.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\returning_pointer_from_function.dir\cmake_clean.cmake
.PHONY : CMakeFiles/returning_pointer_from_function.dir/clean

CMakeFiles/returning_pointer_from_function.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dieha\CLionProjects\returning_pointer_from_function C:\Users\dieha\CLionProjects\returning_pointer_from_function C:\Users\dieha\CLionProjects\returning_pointer_from_function\cmake-build-debug C:\Users\dieha\CLionProjects\returning_pointer_from_function\cmake-build-debug C:\Users\dieha\CLionProjects\returning_pointer_from_function\cmake-build-debug\CMakeFiles\returning_pointer_from_function.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/returning_pointer_from_function.dir/depend

