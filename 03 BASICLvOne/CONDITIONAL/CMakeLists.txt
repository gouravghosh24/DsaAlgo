cmake_minimum_required(VERSION 3.28)
project(CONDITIONAL)

set(CMAKE_CXX_STANDARD 17)

add_executable(CONDITIONAL main.cpp
        MiniCalC.cpp
        NumberOfNotes.cpp)

add_executable(CONDI1 MiniCalC.cpp)
add_executable(CONDI2 NumberOfNotes.cpp)
