cmake_minimum_required(VERSION 3.15)

set(APP_NAME "hello-app")

project(${APP_NAME} LANGUAGES CXX)

add_executable(${APP_NAME}
	src/hello_app.cpp)

target_link_libraries(${APP_NAME}
	core-functionality)

