cmake_minimum_required(VERSION 3.15)

set(APP_NAME "core-test")

project(${APP_NAME} LANGUAGES CXX)

find_package(GTest CONFIG REQUIRED)

add_executable(${APP_NAME}
	src/core-test.cpp)

target_link_libraries(${APP_NAME}
	core-functionality
	GTest::gtest
	GTest::gtest_main)

add_test(NAME CoreTest COMMAND ${APP_NAME})

