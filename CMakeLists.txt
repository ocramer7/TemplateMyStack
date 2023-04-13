cmake_minimum_required(VERSION 3.25)
project(TemplateMyStack)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(TemplateMyStack
        myStack.cpp
        myStack.h
        myStackTest.cpp)
