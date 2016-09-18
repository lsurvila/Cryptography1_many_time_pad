cmake_minimum_required(VERSION 3.6)
project(Cryptography1_Many_Time_Pad)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Cryptography1_Many_Time_Pad ${SOURCE_FILES})