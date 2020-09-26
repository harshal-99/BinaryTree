cmake_minimum_required(VERSION 3.15)
project(BinaryTree)
set(CMAKE_CXX_STANDARD 20)

add_executable(main src/main.cpp src/binaryTree.cpp include/binaryTree.hpp)
add_executable(test test/main.cpp test/test.cpp)

