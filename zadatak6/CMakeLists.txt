cmake_minimum_required(VERSION 3.16.3)

project(zadatak5)

include_directories(include/Student include/Professor)

option(BUILD_SHARED_LIBS "Build using libraries" ON)

configure_file(include/Professor/Professor.h include/Student/Student.h)

add_subdirectory(lib/)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} PUBLIC Professor Student)
