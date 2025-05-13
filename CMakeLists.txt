cmake_minimum_required(VERSION 3.16)

project(REMU-V)
file(GLOB_RECURSE SRC
    "src/*.c"
)

file(GLOB_RECURSE INCL
    "include/*.h"
)

add_executable(REMU-V WIN32 ${SRC})
target_include_directories(REMU-V PRIVATE ${SRC})
