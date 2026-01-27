# Data Structures & Algorithms Practice

A C++ project for learning and practicing data structures and algorithms.

## Project Structure

```
├── src/
│   ├── main.cpp                 # Main entry point with menu
│   ├── arrays/                  # Array problems
│   ├── linked_lists/            # Linked list implementations
│   ├── stacks_queues/           # Stack and queue problems
│   ├── trees/                   # Binary tree problems
│   ├── graphs/                  # Graph problems
│   └── sorting/                 # Sorting algorithms
├── include/                     # Header files (for future use)
├── CMakeLists.txt              # CMake build configuration
└── README.md                    # This file
```

## Building the Project

### Using Build Task (Recommended in VS Code)
Press `Ctrl+Shift+B` (or `Cmd+Shift+B` on macOS) to build the project.

### Manual Build
```bash
clang++ -std=c++17 -I./include \
    src/main.cpp \
    src/arrays/array_problems.cpp \
    src/linked_lists/linked_list.cpp \
    src/stacks_queues/stack_queue.cpp \
    src/trees/binary_tree.cpp \
    src/graphs/graph.cpp \
    src/sorting/sorting_algos.cpp \
    -o build/dsa_practice
```

### Using CMake
```bash
mkdir build
cd build
cmake ..
make
./dsa_practice
```

## Running the Program

```bash
./build/dsa_practice
```

The program presents an interactive menu to choose different DSA topics to practice.

## Topics Covered

- **Arrays** - Two sum, searching, manipulation
- **Linked Lists** - Traversal, insertion, deletion
- **Stacks & Queues** - LIFO/FIFO operations
- **Trees** - Binary trees, traversals, BST
- **Graphs** - Adjacency lists, BFS, DFS
- **Sorting** - Bubble sort, Quick sort, Merge sort

## How to Use

1. Open the project in VS Code
2. Use the provided build task to compile
3. Run the executable and select a topic
4. Practice problems in each category

## Adding New Problems

1. Create a new file in the appropriate subdirectory
2. Implement your solution
3. Add the corresponding function call in `main.cpp`
4. Update CMakeLists.txt if needed
5. Recompile

## Requirements

- C++17 or later
- clang++ or g++ compiler
- CMake (optional, for advanced builds)

## License

Educational use only.
