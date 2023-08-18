# cmake_minimum_required(VERSION <specify CMake version here>)
project(university C)

set(CMAKE_C_STANDARD 99)

add_executable(LinerList "data structure/linearList/LinerList.c" )
add_executable(week07Program c/week07Program.c)
add_executable(SingleLinkedList "data structure/linearList/SingleLinkedList.c")
add_executable(LinkedList "data structure/linearList/LinkedList.c")
add_executable(ArrayStack "data structure/stack/ArrayStack.c")
add_executable(LinkedStack "data structure/stack/LinkedStack.c")
add_executable(ArrayQueue "data structure/queue/ArrayQueue.c")
add_executable(LinkedQueue "data structure/queue/LinkedQueue.c")