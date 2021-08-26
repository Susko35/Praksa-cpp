cmake_minimum_required(VERSION 3.16.3)

project(zadatak5)

include_directories(include/Student include/Professor)

add_executable(${PROJECT_NAME} 
	src/main.cpp 
	src/Professor.cpp 
	src/Student.cpp 
	include/Student/Student.h
	include/Professor/Professor.h
	)

