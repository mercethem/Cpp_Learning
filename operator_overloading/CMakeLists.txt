cmake_minimum_required(VERSION 3.28)
project(operator_overloading)

set(CMAKE_CXX_STANDARD 20)

add_executable(operator_overloading main.cpp m_int.h
        m_int.cpp)
