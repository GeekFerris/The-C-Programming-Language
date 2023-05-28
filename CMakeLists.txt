cmake_minimum_required(VERSION 3.25)
project(chapter01 C)

set(CMAKE_C_STANDARD 99)

add_executable(hello chapter01/hello.c)
add_executable(var chapter01/var.c)
add_executable(2.1 chapter02/2.1.c)
add_executable(2.4 chapter02/2.4.c)
add_executable(1.5.1 chapter01/1.5.1.c)
add_executable(1.9 chapter01/1.9.c)