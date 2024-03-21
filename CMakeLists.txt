cmake_minimum_required(VERSION 3.27)
project(OOP_lab_1_4)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_lab_1_4 main.cpp
        Train.cpp
)

add_subdirectory(Google_tests)


file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test.txt
        DESTINATION ${CMAKE_CURRENT_BINARY_DIR})