# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/androlink/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/androlink/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/androlink/CLionProjects/bogo-csv-editor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/androlink/CLionProjects/bogo-csv-editor/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bogo-csv-editor.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/bogo-csv-editor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bogo-csv-editor.dir/flags.make

CMakeFiles/bogo-csv-editor.dir/main.c.o: CMakeFiles/bogo-csv-editor.dir/flags.make
CMakeFiles/bogo-csv-editor.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/androlink/CLionProjects/bogo-csv-editor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/bogo-csv-editor.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bogo-csv-editor.dir/main.c.o -c /home/androlink/CLionProjects/bogo-csv-editor/main.c

CMakeFiles/bogo-csv-editor.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bogo-csv-editor.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/androlink/CLionProjects/bogo-csv-editor/main.c > CMakeFiles/bogo-csv-editor.dir/main.c.i

CMakeFiles/bogo-csv-editor.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bogo-csv-editor.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/androlink/CLionProjects/bogo-csv-editor/main.c -o CMakeFiles/bogo-csv-editor.dir/main.c.s

CMakeFiles/bogo-csv-editor.dir/source/client.c.o: CMakeFiles/bogo-csv-editor.dir/flags.make
CMakeFiles/bogo-csv-editor.dir/source/client.c.o: ../source/client.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/androlink/CLionProjects/bogo-csv-editor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/bogo-csv-editor.dir/source/client.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/bogo-csv-editor.dir/source/client.c.o -c /home/androlink/CLionProjects/bogo-csv-editor/source/client.c

CMakeFiles/bogo-csv-editor.dir/source/client.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/bogo-csv-editor.dir/source/client.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/androlink/CLionProjects/bogo-csv-editor/source/client.c > CMakeFiles/bogo-csv-editor.dir/source/client.c.i

CMakeFiles/bogo-csv-editor.dir/source/client.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/bogo-csv-editor.dir/source/client.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/androlink/CLionProjects/bogo-csv-editor/source/client.c -o CMakeFiles/bogo-csv-editor.dir/source/client.c.s

# Object files for target bogo-csv-editor
bogo__csv__editor_OBJECTS = \
"CMakeFiles/bogo-csv-editor.dir/main.c.o" \
"CMakeFiles/bogo-csv-editor.dir/source/client.c.o"

# External object files for target bogo-csv-editor
bogo__csv__editor_EXTERNAL_OBJECTS =

bogo-csv-editor: CMakeFiles/bogo-csv-editor.dir/main.c.o
bogo-csv-editor: CMakeFiles/bogo-csv-editor.dir/source/client.c.o
bogo-csv-editor: CMakeFiles/bogo-csv-editor.dir/build.make
bogo-csv-editor: CMakeFiles/bogo-csv-editor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/androlink/CLionProjects/bogo-csv-editor/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable bogo-csv-editor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bogo-csv-editor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bogo-csv-editor.dir/build: bogo-csv-editor
.PHONY : CMakeFiles/bogo-csv-editor.dir/build

CMakeFiles/bogo-csv-editor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bogo-csv-editor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bogo-csv-editor.dir/clean

CMakeFiles/bogo-csv-editor.dir/depend:
	cd /home/androlink/CLionProjects/bogo-csv-editor/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/androlink/CLionProjects/bogo-csv-editor /home/androlink/CLionProjects/bogo-csv-editor /home/androlink/CLionProjects/bogo-csv-editor/cmake-build-debug /home/androlink/CLionProjects/bogo-csv-editor/cmake-build-debug /home/androlink/CLionProjects/bogo-csv-editor/cmake-build-debug/CMakeFiles/bogo-csv-editor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bogo-csv-editor.dir/depend

