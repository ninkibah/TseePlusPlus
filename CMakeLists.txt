cmake_minimum_required(VERSION 3.16)
project(TseePlusPlus)


option(BUILD_CXX_20 "C++20" ON)

if(BUILD_CXX_20)
    set(CMAKE_CXX_STANDARD 20)
else(BUILD_CXX_20)
    set(CMAKE_CXX_STANDARD 17)
endif(BUILD_CXX_20)


add_executable(TseePlusPlus Hauptmodule.cpp)
target_include_directories(TseePlusPlus PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include/standard)