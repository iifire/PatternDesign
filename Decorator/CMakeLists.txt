cmake_minimum_required(VERSION 2.8)
project(simple)
add_definitions("-Wall -g")
add_definitions(-std=c++14)


include_directories(
    ${PROJECT_SOURCE_DIR}/include
        /usr/local/Cellar/eigen/3.3.7/include/eigen3
)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)