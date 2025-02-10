cmake_minimum_required(VERSION 3.5)
project(MoveSemantics)
set(CMAKE_CXX_STANDARD 17)


add_executable(rat_thing rat_thing.cpp)
add_executable(trace_obj object_tracer.cpp)
add_executable(groucho groucho_except.cpp)
add_executable(inheritance_crash inheritance_crash.cpp)
add_executable(usingSimpleString usingSimpleString.cpp SimpleString.h)
