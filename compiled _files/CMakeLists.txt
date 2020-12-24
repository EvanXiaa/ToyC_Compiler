cmake_minimum_required(VERSION 3.16)
project(compiled_files)

set(CMAKE_CXX_STANDARD 14)

add_executable(compiled_files cc.cpp codegen.cpp node.h c.lex.cpp codegen.h c.tab.cpp c.tab.hpp)
include_directories("/usr/local/Cellar/llvm/11.0.0/include")