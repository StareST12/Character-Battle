cmake_minimum_required(VERSION 3.29)
project(Project2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Character-Battle
    Character.cpp
    Character.h
    main.cpp)
