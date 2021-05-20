CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
add_compile_options(-Wall -std=c++11)
PROJECT(homework4)
add_executable(homework4 src/homework4.cpp)
target_include_directories(homework4 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)

