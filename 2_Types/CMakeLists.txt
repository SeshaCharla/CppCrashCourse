cmake_minimum_required(VERSION 3.5)

project(Chap2)

set(CMAKE_CXX_STANDARD 17)

find_package(Eigen3 CONFIG REQUIRED)

# target_link_libraries(main PRIVATE Eigen3::Eigen)
add_executable(integers
                integers.cpp)
add_executable(size_of_stuff
               sizeof_application.cpp)
add_executable(range_for range_for.cpp)
