cmake_minimum_required(VERSION 3.3)
project(LargestPalindrome_PE)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(LargestPalindrome_PE ${SOURCE_FILES} BrosLibrary.h)