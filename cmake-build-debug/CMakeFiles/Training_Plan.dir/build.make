# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/davide/Documents/clion-2019.3.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/davide/Documents/clion-2019.3.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/davide/Desktop/projects/Training-Plan

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/davide/Desktop/projects/Training-Plan/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Training_Plan.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Training_Plan.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Training_Plan.dir/flags.make

CMakeFiles/Training_Plan.dir/main.cpp.o: CMakeFiles/Training_Plan.dir/flags.make
CMakeFiles/Training_Plan.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/projects/Training-Plan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Training_Plan.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Training_Plan.dir/main.cpp.o -c /home/davide/Desktop/projects/Training-Plan/main.cpp

CMakeFiles/Training_Plan.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Training_Plan.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/projects/Training-Plan/main.cpp > CMakeFiles/Training_Plan.dir/main.cpp.i

CMakeFiles/Training_Plan.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Training_Plan.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/projects/Training-Plan/main.cpp -o CMakeFiles/Training_Plan.dir/main.cpp.s

CMakeFiles/Training_Plan.dir/src/exercise.cpp.o: CMakeFiles/Training_Plan.dir/flags.make
CMakeFiles/Training_Plan.dir/src/exercise.cpp.o: ../src/exercise.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/projects/Training-Plan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Training_Plan.dir/src/exercise.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Training_Plan.dir/src/exercise.cpp.o -c /home/davide/Desktop/projects/Training-Plan/src/exercise.cpp

CMakeFiles/Training_Plan.dir/src/exercise.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Training_Plan.dir/src/exercise.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/projects/Training-Plan/src/exercise.cpp > CMakeFiles/Training_Plan.dir/src/exercise.cpp.i

CMakeFiles/Training_Plan.dir/src/exercise.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Training_Plan.dir/src/exercise.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/projects/Training-Plan/src/exercise.cpp -o CMakeFiles/Training_Plan.dir/src/exercise.cpp.s

CMakeFiles/Training_Plan.dir/src/gym.cpp.o: CMakeFiles/Training_Plan.dir/flags.make
CMakeFiles/Training_Plan.dir/src/gym.cpp.o: ../src/gym.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/projects/Training-Plan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Training_Plan.dir/src/gym.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Training_Plan.dir/src/gym.cpp.o -c /home/davide/Desktop/projects/Training-Plan/src/gym.cpp

CMakeFiles/Training_Plan.dir/src/gym.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Training_Plan.dir/src/gym.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/projects/Training-Plan/src/gym.cpp > CMakeFiles/Training_Plan.dir/src/gym.cpp.i

CMakeFiles/Training_Plan.dir/src/gym.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Training_Plan.dir/src/gym.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/projects/Training-Plan/src/gym.cpp -o CMakeFiles/Training_Plan.dir/src/gym.cpp.s

CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.o: CMakeFiles/Training_Plan.dir/flags.make
CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.o: ../src/trainingPlan.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/projects/Training-Plan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.o -c /home/davide/Desktop/projects/Training-Plan/src/trainingPlan.cpp

CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/projects/Training-Plan/src/trainingPlan.cpp > CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.i

CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/projects/Training-Plan/src/trainingPlan.cpp -o CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.s

CMakeFiles/Training_Plan.dir/src/person.cpp.o: CMakeFiles/Training_Plan.dir/flags.make
CMakeFiles/Training_Plan.dir/src/person.cpp.o: ../src/person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/davide/Desktop/projects/Training-Plan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Training_Plan.dir/src/person.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Training_Plan.dir/src/person.cpp.o -c /home/davide/Desktop/projects/Training-Plan/src/person.cpp

CMakeFiles/Training_Plan.dir/src/person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Training_Plan.dir/src/person.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/davide/Desktop/projects/Training-Plan/src/person.cpp > CMakeFiles/Training_Plan.dir/src/person.cpp.i

CMakeFiles/Training_Plan.dir/src/person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Training_Plan.dir/src/person.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/davide/Desktop/projects/Training-Plan/src/person.cpp -o CMakeFiles/Training_Plan.dir/src/person.cpp.s

# Object files for target Training_Plan
Training_Plan_OBJECTS = \
"CMakeFiles/Training_Plan.dir/main.cpp.o" \
"CMakeFiles/Training_Plan.dir/src/exercise.cpp.o" \
"CMakeFiles/Training_Plan.dir/src/gym.cpp.o" \
"CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.o" \
"CMakeFiles/Training_Plan.dir/src/person.cpp.o"

# External object files for target Training_Plan
Training_Plan_EXTERNAL_OBJECTS =

Training_Plan: CMakeFiles/Training_Plan.dir/main.cpp.o
Training_Plan: CMakeFiles/Training_Plan.dir/src/exercise.cpp.o
Training_Plan: CMakeFiles/Training_Plan.dir/src/gym.cpp.o
Training_Plan: CMakeFiles/Training_Plan.dir/src/trainingPlan.cpp.o
Training_Plan: CMakeFiles/Training_Plan.dir/src/person.cpp.o
Training_Plan: CMakeFiles/Training_Plan.dir/build.make
Training_Plan: CMakeFiles/Training_Plan.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/davide/Desktop/projects/Training-Plan/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Training_Plan"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Training_Plan.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Training_Plan.dir/build: Training_Plan

.PHONY : CMakeFiles/Training_Plan.dir/build

CMakeFiles/Training_Plan.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Training_Plan.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Training_Plan.dir/clean

CMakeFiles/Training_Plan.dir/depend:
	cd /home/davide/Desktop/projects/Training-Plan/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/davide/Desktop/projects/Training-Plan /home/davide/Desktop/projects/Training-Plan /home/davide/Desktop/projects/Training-Plan/cmake-build-debug /home/davide/Desktop/projects/Training-Plan/cmake-build-debug /home/davide/Desktop/projects/Training-Plan/cmake-build-debug/CMakeFiles/Training_Plan.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Training_Plan.dir/depend

