cmake_minimum_required(VERSION 3.2)

project(l2)

add_library(calculator STATIC calculator.cpp)

add_executable(main main.cpp)

target_link_libraries(main calculator)