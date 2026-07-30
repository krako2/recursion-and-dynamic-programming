cmake_minimum_required(VERSION 3.31)
project(recursion-and-dynamic-programming)

set(CMAKE_C_STANDARD 90)
set(CMAKE_C_STANDARD_REQUIRED True)

if(CMAKE_C_COMPILER_ID STREQUAL "Clang")
    add_compile_options(
        -ansi
        -Weverything
        -Werror
        -Wno-unsafe-buffer-usage
    )
endif()

if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-g)
endif()

if(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_compile_options(-O3)
endif()

set(RECURSION recursion)
set(DYNAMIC_PROGRAMMING dynamic-programming)

add_executable(${RECURSION})
add_executable(${DYNAMIC_PROGRAMMING})

add_subdirectory(src)
