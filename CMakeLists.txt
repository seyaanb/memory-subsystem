cmake_minimum_required(VERSION 3.10)
project(MemorySubsystem VERSION 1.0 LANGUAGES CXX)

#Require C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -march=native -Wall -Wextra -Werror")

#Require NUMA library
find_package(PkgConfig REQUIRED)
pkg_check_modules(NUMA REQUIRED numa)

#Include directories
include_directories(src)

#Compile as a static library
file(GLOB_RECURSE SOURCES "src/*.cpp")
add_library(memory_subsystem STATIC ${SOURCES})
target_link_libraries(memory_subsystem ${NUMA_LIBRARIES})
