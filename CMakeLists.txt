cmake_minimum_required(VERSION 3.24)
project(CLion_Cpp_base)

set(CMAKE_CXX_STANDARD 17)

# 必须添加 cppDyz/src/TestOne.cpp cppDyz/include/TestOne.h，程序中才可以调用到
add_executable(CLion_Cpp_base main.cpp cppDyz/src/TestOne.cpp cppDyz/include/TestOne.h cppDyz/src/TestVirtual.cpp cppDyz/include/TestVirtual.h)
