cmake_minimum_required(VERSION 3.5)

project(Chap3)

set(CMAKE_CXX_STANDARD 17)


add_executable(pointerStuff pointerStuff.cpp
        ClockOfTheNow.h)
add_executable(array_ptrs array_ptrs.cpp
        fw_ll.h)
add_executable(ref_stuff referenceStuff.cpp
        ClockOfTheNow.h)
add_executable(fw_ll fw_ll.cpp)
add_executable(ref_assign reference_stuff.cpp)
add_executable(const_members const_members.cpp)
