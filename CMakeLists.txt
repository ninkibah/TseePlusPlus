cmake_minimum_required(VERSION 3.19)
project(TseePlusPlus)

set(CMAKE_CXX_STANDARD 20)

add_executable(TseePlusPlus Hauptmodule.cpp)
target_include_directories(TseePlusPlus PUBLIC ${CMAKE_CURRENT_LIST_DIR})