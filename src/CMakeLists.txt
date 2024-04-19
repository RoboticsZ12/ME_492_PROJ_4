cmake_minimum_required(VERSION 3.22.1)
project(PROJ4)

add_executable(Proj4 main.cpp)
include_directories(${Eigen3_INCLUDE_DIRS})
target_link_libraries(Proj4 ${Eigen3_LIBS})

# THIS EXECUTABLE FILE NOW RELIES ON LIBRARY "INCLUDE"
target_link_libraries(Proj4 PUBLIC include)
