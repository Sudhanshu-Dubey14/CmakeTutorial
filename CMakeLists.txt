cmake_minimum_required(VERSION 2.8)

//for checking what minimum version of CMake user should have to run your configuration

project(Cmake_tutorial)


//place where toolchain file will be read


#include subdirectories

//refer to folders located directly within a folder, as well as folders that are stored in other folders within a folder.

add_subdirectory(include)

//We have add subdirectory named include.

add_subdirectory(src)

//We have add subdirectory named src.