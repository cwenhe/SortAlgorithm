﻿cmake_minimum_required(VERSION 3.10)

project(SortAlgorithm)
set(ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR})
include(CheckCXXCompilerFlag)

CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
if(COMPILER_SUPPORTS_CXX11)
    message("support CXX11")
    add_definitions(-std=c++11)
endif()

aux_source_directory(${ROOT_PATH} SOURCE_FILES)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
