cmake_minimum_required(VERSION 3.22.1)
project(PROJ4)

add_subdirectory(src)
add_subdirectory(include)

# PUT THIS IN WHEN REVIEWING THIEN'S CODE
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

find_package(Eigen3 CONFIG REQUIRED)
#include_directories(${EIGEN3_INCLUDE_DIR})

#install(TARGETS ${PROJECT_NAME})