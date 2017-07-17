# - Define the minimum CMake version
cmake_minimum_required(VERSION 3.2)
# - Call project() to setup system
# From CMake 3, we can set the project version easily in one go
project(tricktrackUser VERSION 0.1.0)

find_package(tricktrack)

#
# - https://cmake.org/cmake/help/v3.3/manual/cmake-compile-features.7.html
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(main main.cpp)
link_directories(${tricktrack_LIBRARY_DIR})
include_directories(${tricktrack_INCLUDE_DIR})

