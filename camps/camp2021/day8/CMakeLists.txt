cmake_minimum_required(VERSION 3.17)
project(day8)

set(CMAKE_CXX_STANDARD 17)

add_compile_options(-O0 -g3)

add_executable(day8 main.cpp)
add_executable(a src/a.cpp)

add_executable(b src/b.cpp)

add_executable(c src/c.cpp)

add_executable(d src/d.cpp)
