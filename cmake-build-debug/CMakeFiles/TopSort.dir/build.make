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
CMAKE_COMMAND = "E:\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CLionProjects\TopSort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CLionProjects\TopSort\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TopSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TopSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TopSort.dir/flags.make

CMakeFiles/TopSort.dir/main.c.obj: CMakeFiles/TopSort.dir/flags.make
CMakeFiles/TopSort.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\TopSort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TopSort.dir/main.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TopSort.dir\main.c.obj   -c E:\CLionProjects\TopSort\main.c

CMakeFiles/TopSort.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TopSort.dir/main.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLionProjects\TopSort\main.c > CMakeFiles\TopSort.dir\main.c.i

CMakeFiles/TopSort.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TopSort.dir/main.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLionProjects\TopSort\main.c -o CMakeFiles\TopSort.dir\main.c.s

CMakeFiles/TopSort.dir/topsort.c.obj: CMakeFiles/TopSort.dir/flags.make
CMakeFiles/TopSort.dir/topsort.c.obj: ../topsort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\TopSort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/TopSort.dir/topsort.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TopSort.dir\topsort.c.obj   -c E:\CLionProjects\TopSort\topsort.c

CMakeFiles/TopSort.dir/topsort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TopSort.dir/topsort.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLionProjects\TopSort\topsort.c > CMakeFiles\TopSort.dir\topsort.c.i

CMakeFiles/TopSort.dir/topsort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TopSort.dir/topsort.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLionProjects\TopSort\topsort.c -o CMakeFiles\TopSort.dir\topsort.c.s

CMakeFiles/TopSort.dir/thecoolermalloc.c.obj: CMakeFiles/TopSort.dir/flags.make
CMakeFiles/TopSort.dir/thecoolermalloc.c.obj: ../thecoolermalloc.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CLionProjects\TopSort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/TopSort.dir/thecoolermalloc.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\TopSort.dir\thecoolermalloc.c.obj   -c E:\CLionProjects\TopSort\thecoolermalloc.c

CMakeFiles/TopSort.dir/thecoolermalloc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TopSort.dir/thecoolermalloc.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CLionProjects\TopSort\thecoolermalloc.c > CMakeFiles\TopSort.dir\thecoolermalloc.c.i

CMakeFiles/TopSort.dir/thecoolermalloc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TopSort.dir/thecoolermalloc.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CLionProjects\TopSort\thecoolermalloc.c -o CMakeFiles\TopSort.dir\thecoolermalloc.c.s

# Object files for target TopSort
TopSort_OBJECTS = \
"CMakeFiles/TopSort.dir/main.c.obj" \
"CMakeFiles/TopSort.dir/topsort.c.obj" \
"CMakeFiles/TopSort.dir/thecoolermalloc.c.obj"

# External object files for target TopSort
TopSort_EXTERNAL_OBJECTS =

TopSort.exe: CMakeFiles/TopSort.dir/main.c.obj
TopSort.exe: CMakeFiles/TopSort.dir/topsort.c.obj
TopSort.exe: CMakeFiles/TopSort.dir/thecoolermalloc.c.obj
TopSort.exe: CMakeFiles/TopSort.dir/build.make
TopSort.exe: CMakeFiles/TopSort.dir/linklibs.rsp
TopSort.exe: CMakeFiles/TopSort.dir/objects1.rsp
TopSort.exe: CMakeFiles/TopSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CLionProjects\TopSort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable TopSort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TopSort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TopSort.dir/build: TopSort.exe

.PHONY : CMakeFiles/TopSort.dir/build

CMakeFiles/TopSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TopSort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TopSort.dir/clean

CMakeFiles/TopSort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CLionProjects\TopSort E:\CLionProjects\TopSort E:\CLionProjects\TopSort\cmake-build-debug E:\CLionProjects\TopSort\cmake-build-debug E:\CLionProjects\TopSort\cmake-build-debug\CMakeFiles\TopSort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TopSort.dir/depend

