cmake_minimum_required(VERSION 3.16.3)

project(zadatak7)

add_executable(${PROJECT_NAME} 
	src/main.cpp 
	)

add_subdirectory(Professor)
add_subdirectory(Student)

#set(IMPORT_DIR ${CMAKE_SOURCE_DIR}/lib)
#add_library(Professor SHARED IMPORTED)
#set_target_properties(Professor PROPERTIES IMPORTED_LOCATION ${IMPORT_DIR}/libProfessor.so)
#add_library(Student SHARED IMPORTED)
#set_target_properties(Student PROPERTIES IMPORTED_LOCATION ${IMPORT_DIR}/libStudent.so)

#target_include_directories(${PROJECT_NAME} PRIVATE include/)

target_link_libraries(${PROJECT_NAME} Professor Student)

