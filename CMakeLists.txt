cmake_minimum_required(VERSION 3.16)
project(Exercise)

set(CMAKE_CXX_STANDARD 11)

add_executable(Exercise main.cpp)
add_executable(Exercise2 chapter10/usestock01.cpp chapter10/stock01.h chapter10/stock01.cpp)
add_executable(Exercise3 chapter10/usestock10.cpp chapter10/stock10.h chapter10/stock10.cpp)
add_executable(Exercise4 chapter11/usetime0.cpp chapter11/mytime0.cpp chapter11/mytime0.h)
add_executable(Exercise5 chapter11/usetime1.cpp chapter11/mytime1.cpp chapter11/mytime1.h)
add_executable(Exercise6 chapter11/usetime3.cpp chapter11/mytime3.cpp chapter11/mytime3.h)
add_executable(Exercise7 chapter12/stringbad.cpp chapter12/stringbad.h chapter12/usestringbad.cpp)