# CMakeList.txt : CMake project for lab1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (task1 "task1.c")
add_executable (task2 "task2.c")
add_executable (task3 "task3.c")
add_executable (task4 "task4.c")
add_executable (task5 "task5_main.c" "task5_func.c")
add_executable (task6 "task6_main.c" "task6_func.c")
add_executable (task7 "task7_main.c" "task7_func.c" "task7_func.h")

# TODO: Add tests and install targets if needed.
