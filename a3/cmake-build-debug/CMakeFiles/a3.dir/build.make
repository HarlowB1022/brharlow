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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\benha\OneDrive\Desktop\brharlow\a3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\benha\OneDrive\Desktop\brharlow\a3\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/a3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/a3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/a3.dir/flags.make

CMakeFiles/a3.dir/src/Sudoku.cpp.obj: CMakeFiles/a3.dir/flags.make
CMakeFiles/a3.dir/src/Sudoku.cpp.obj: ../src/Sudoku.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\benha\OneDrive\Desktop\brharlow\a3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/a3.dir/src/Sudoku.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\a3.dir\src\Sudoku.cpp.obj -c C:\Users\benha\OneDrive\Desktop\brharlow\a3\src\Sudoku.cpp

CMakeFiles/a3.dir/src/Sudoku.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a3.dir/src/Sudoku.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\benha\OneDrive\Desktop\brharlow\a3\src\Sudoku.cpp > CMakeFiles\a3.dir\src\Sudoku.cpp.i

CMakeFiles/a3.dir/src/Sudoku.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a3.dir/src/Sudoku.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\benha\OneDrive\Desktop\brharlow\a3\src\Sudoku.cpp -o CMakeFiles\a3.dir\src\Sudoku.cpp.s

CMakeFiles/a3.dir/main.cpp.obj: CMakeFiles/a3.dir/flags.make
CMakeFiles/a3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\benha\OneDrive\Desktop\brharlow\a3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/a3.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\a3.dir\main.cpp.obj -c C:\Users\benha\OneDrive\Desktop\brharlow\a3\main.cpp

CMakeFiles/a3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/a3.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\benha\OneDrive\Desktop\brharlow\a3\main.cpp > CMakeFiles\a3.dir\main.cpp.i

CMakeFiles/a3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/a3.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\benha\OneDrive\Desktop\brharlow\a3\main.cpp -o CMakeFiles\a3.dir\main.cpp.s

# Object files for target a3
a3_OBJECTS = \
"CMakeFiles/a3.dir/src/Sudoku.cpp.obj" \
"CMakeFiles/a3.dir/main.cpp.obj"

# External object files for target a3
a3_EXTERNAL_OBJECTS =

a3.exe: CMakeFiles/a3.dir/src/Sudoku.cpp.obj
a3.exe: CMakeFiles/a3.dir/main.cpp.obj
a3.exe: CMakeFiles/a3.dir/build.make
a3.exe: CMakeFiles/a3.dir/linklibs.rsp
a3.exe: CMakeFiles/a3.dir/objects1.rsp
a3.exe: CMakeFiles/a3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\benha\OneDrive\Desktop\brharlow\a3\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable a3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\a3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/a3.dir/build: a3.exe

.PHONY : CMakeFiles/a3.dir/build

CMakeFiles/a3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\a3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/a3.dir/clean

CMakeFiles/a3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\benha\OneDrive\Desktop\brharlow\a3 C:\Users\benha\OneDrive\Desktop\brharlow\a3 C:\Users\benha\OneDrive\Desktop\brharlow\a3\cmake-build-debug C:\Users\benha\OneDrive\Desktop\brharlow\a3\cmake-build-debug C:\Users\benha\OneDrive\Desktop\brharlow\a3\cmake-build-debug\CMakeFiles\a3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/a3.dir/depend

