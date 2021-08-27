cmake_minimum_required(VERSION 3.16.3)

project(zadatak5)

add_executable(${PROJECT_NAME} 
	src/main.cpp 
	src/Professor.cpp 
	src/Student.cpp 
	)

target_include_directories(${PROJECT_NAME} include)


