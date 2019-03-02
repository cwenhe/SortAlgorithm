cmake_minimum_required(VERSION 3.10)

project(SortAlgorithm)
set(ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})

file(GLOB_RECURSE SOURCE_FILES "*.cpp")

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
