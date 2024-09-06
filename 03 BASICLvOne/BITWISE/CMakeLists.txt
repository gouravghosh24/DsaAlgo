cmake_minimum_required(VERSION 3.28)
project(BITWISE)

set(CMAKE_CXX_STANDARD 17)

add_executable(BITWISE main.cpp
        PrimeNumber.cpp
        RoughCopy.cpp
        ProductandSum.cpp
        IntegerToBinary.cpp)
add_executable(PRACT1 Pract1.cpp)
add_executable(PRACT2 PrimeNumber.cpp)
add_executable(PRACT3 RoughCopy.cpp)
add_executable(PRACT4 ProductandSum.cpp)
add_executable(PRACT5 IntegerToBinary.cpp)
