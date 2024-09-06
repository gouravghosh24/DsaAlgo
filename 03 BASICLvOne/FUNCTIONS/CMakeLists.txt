cmake_minimum_required(VERSION 3.28)
project(FUNCTIONS)

set(CMAKE_CXX_STANDARD 17)

add_executable(FUNCTIONS main.cpp
        PowerOfTwoNums.cpp
        EvenOdd.cpp
        PrimeNumber.cpp
        FibonacciFunc.cpp)
add_executable(FUNC1 PowerOfTwoNums.cpp)
add_executable(FUNC2 EvenOdd.cpp)
add_executable(FUNC3 PrimeNumber.cpp)
add_executable(FUNC4 FibonacciFunc.cpp)
