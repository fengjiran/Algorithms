cmake_minimum_required(VERSION 3.12)
project(Algorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(Algorithms
#        main.cpp
        src/Search/BinarySearch/binary_search.cpp
        header/catch.hpp
        header/algorithms.h test/test_binary_search.cpp src/Vector/Vector.hpp)