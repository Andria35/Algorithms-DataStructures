cmake_minimum_required(VERSION 3.10)
project(DSA_Practice)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
set(SOURCES
    src/main.cpp
    src/arrays/array_problems.cpp
    src/linked_lists/linked_list.cpp
    src/stacks_queues/stack_queue.cpp
    src/trees/binary_tree.cpp
    src/graphs/graph.cpp
    src/sorting/sorting_algos.cpp
)

# Create executable
add_executable(dsa_practice ${SOURCES})

# Optional: Add compiler flags for warnings
if(MSVC)
    target_compile_options(dsa_practice PRIVATE /W4)
else()
    target_compile_options(dsa_practice PRIVATE -Wall -Wextra -Wpedantic)
endif()
