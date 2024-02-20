cmake_minimum_required(VERSION 3.27)
project(practiceExercise)

set(CMAKE_CXX_STANDARD 20)

add_executable(practiceExercise main.cpp
fixationpoint.cpp fixationpoint.h
)

set_target_properties(practiceExercise PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin/"
)