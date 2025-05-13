cmake_minimum_required(VERSION 3.16)

project(REMU-V)
file(GLOB_RECURSE CPPSRC
    "src/*.c"
    "src/*.h"
)
add_executable(REMU-V WIN32 ${CPPSRC})
target_include_directories(REMU-V PRIVATE ${CPPSRC})
