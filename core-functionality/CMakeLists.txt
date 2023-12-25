cmake_minimum_required(VERSION 3.15)

set(LIB_NAME "core-functionality")

project(${LIB_NAME} LANGUAGES CXX)

add_library(${LIB_NAME} STATIC
	src/hello.cpp)

target_include_directories(${LIB_NAME}
	PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

