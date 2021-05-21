cmake_minimum_required(VERSION 3.20)

set(This Pazymiu_Skaiciuokle)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
    includes/functions.hpp
    includes/students.hpp
)
set(Sources
    includes/functions.cpp
    includes/students.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)