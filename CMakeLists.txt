cmake_minimum_required(VERSION 3.16)
project(Toy-C-Compiler-using-Flex-Bison-LLVM-master)

set(CMAKE_CXX_STANDARD 14)

add_executable(Toy-C-Compiler-using-Flex-Bison-LLVM-master cc.cpp codegen.cpp node.h codegen.h c.tab.cpp c.tab.hpp)
include_directories("/usr/local/Cellar/llvm/11.0.0/include")