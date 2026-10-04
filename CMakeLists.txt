cmake_minimum_required(VERSION 3.28)
project(bf_interpreter_cpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(.)

add_executable(bf_interpreter_cpp
        Interpreter.cpp
        Interpreter.h)
