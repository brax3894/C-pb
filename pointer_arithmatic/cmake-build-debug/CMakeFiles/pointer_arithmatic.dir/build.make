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
CMAKE_SOURCE_DIR = C:\Users\dieha\CLionProjects\pointer_arithmatic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dieha\CLionProjects\pointer_arithmatic\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pointer_arithmatic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pointer_arithmatic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pointer_arithmatic.dir/flags.make

CMakeFiles/pointer_arithmatic.dir/main.cpp.obj: CMakeFiles/pointer_arithmatic.dir/flags.make
CMakeFiles/pointer_arithmatic.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dieha\CLionProjects\pointer_arithmatic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pointer_arithmatic.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pointer_arithmatic.dir\main.cpp.obj -c C:\Users\dieha\CLionProjects\pointer_arithmatic\main.cpp

CMakeFiles/pointer_arithmatic.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pointer_arithmatic.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dieha\CLionProjects\pointer_arithmatic\main.cpp > CMakeFiles\pointer_arithmatic.dir\main.cpp.i

CMakeFiles/pointer_arithmatic.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pointer_arithmatic.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dieha\CLionProjects\pointer_arithmatic\main.cpp -o CMakeFiles\pointer_arithmatic.dir\main.cpp.s

# Object files for target pointer_arithmatic
pointer_arithmatic_OBJECTS = \
"CMakeFiles/pointer_arithmatic.dir/main.cpp.obj"

# External object files for target pointer_arithmatic
pointer_arithmatic_EXTERNAL_OBJECTS =

pointer_arithmatic.exe: CMakeFiles/pointer_arithmatic.dir/main.cpp.obj
pointer_arithmatic.exe: CMakeFiles/pointer_arithmatic.dir/build.make
pointer_arithmatic.exe: CMakeFiles/pointer_arithmatic.dir/linklibs.rsp
pointer_arithmatic.exe: CMakeFiles/pointer_arithmatic.dir/objects1.rsp
pointer_arithmatic.exe: CMakeFiles/pointer_arithmatic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dieha\CLionProjects\pointer_arithmatic\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pointer_arithmatic.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pointer_arithmatic.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pointer_arithmatic.dir/build: pointer_arithmatic.exe

.PHONY : CMakeFiles/pointer_arithmatic.dir/build

CMakeFiles/pointer_arithmatic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pointer_arithmatic.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pointer_arithmatic.dir/clean

CMakeFiles/pointer_arithmatic.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dieha\CLionProjects\pointer_arithmatic C:\Users\dieha\CLionProjects\pointer_arithmatic C:\Users\dieha\CLionProjects\pointer_arithmatic\cmake-build-debug C:\Users\dieha\CLionProjects\pointer_arithmatic\cmake-build-debug C:\Users\dieha\CLionProjects\pointer_arithmatic\cmake-build-debug\CMakeFiles\pointer_arithmatic.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointer_arithmatic.dir/depend
