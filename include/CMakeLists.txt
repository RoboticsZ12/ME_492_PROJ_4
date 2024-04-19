cmake_minimum_required(VERSION 3.22.1)
project(PROJ4)

add_library(include matrix_operations.cpp)

# LINKING TO LIBRARIES OF EIGEN
include_directories(${Eigen3_INCLUDE_DIRS})
target_link_libraries(include ${Eigen3_LIBS})

# MAKES THIS ACCESSIBLE TO BE PARED WITH CMAKE IN MAIN.CPP
target_include_directories(include PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
