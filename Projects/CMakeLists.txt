cmake_minimum_required(VERSION 3.23)
project(Loops)


set(CMAKE_C_STANDARD 99)

add_executable(Projects main.c string-cut/date-string-cut.c)



add_subdirectory(string-cut)

target_link_libraries(Projects string-cut)



