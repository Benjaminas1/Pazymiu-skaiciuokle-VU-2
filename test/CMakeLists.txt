cmake_minimum_required(VERSION 3.20)

set(This Tests)

project(${This} C CXX)

set(Sources
    Tests.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Pazymiu_Skaiciuokle
)

add_test(
    NAME ${This}
    COMMAND ${This}
)