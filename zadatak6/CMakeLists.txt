cmake_minimum_required(VERSION 3.16.3)

project(zadatak6)

add_executable(${PROJECT_NAME} 
	src/main.cpp 
	)

add_library(Professor SHARED IMPORTED)
set_property(TARGET Professor PROPERTY IMPORTED_LOCATION /lib/libProfessor.so)
add_library(Student SHARED IMPORTED)
set_property(TARGET Student PROPERTY IMPORTED_LOCATION /lib/libStudent.so)

target_include_directories(${PROJECT_NAME} PRIVATE include/)

target_link_libraries(${PROJECT_NAME} Professor)

target_link_libraries(${PROJECT_NAME} Student)
