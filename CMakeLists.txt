cmake_minimum_required(VERSION 3.15)
project(Training_Plan)

set(CMAKE_CXX_STANDARD 14)

add_executable(Training_Plan main.cpp src/exercise.cpp include/exercise.h src/gym.cpp include/gym.h src/trainingPlan.cpp include/trainingPlan.h src/person.cpp include/person.h)