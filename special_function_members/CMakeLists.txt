cmake_minimum_required(VERSION 3.27)
project(special_function_members)

set(CMAKE_CXX_STANDARD 20)

add_executable(special_function_members main.cpp
        special_member_functions.h
        special_member_functions.cpp)
