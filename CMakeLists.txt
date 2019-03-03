cmake_minimum_required(VERSION 3.10)

project(SortAlgorithm)
set(ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
add_definitions(-std=c++11)

aux_source_directory(${ROOT_PATH} SOURCE_FILES)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
