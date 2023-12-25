cmake_minimum_required(VERSION 3.15)
cmake_policy(SET CMP0091 NEW)
cmake_policy(SET CMP0077 NEW)

#set(VCPKG_FEATURE_FLAGS versions)

project(vs_demo_project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")

if ("MSVC" STREQUAL CMAKE_CXX_COMPILER_ID)
	add_compile_options(/permissive-)
	# eao197: "/permissive-" turn "/Zc:strictStrings" on.
	# have to turn it off otherwise darknet won't be compiled.
	add_compile_options(/Zc:strictStrings-)
	add_compile_options(/execution-charset:utf-8)
	add_compile_options(/source-charset:utf-8)
	add_compile_options(/MP)
	add_compile_options(/W3)
	add_compile_options(/D_CRT_SECURE_NO_WARNINGS)
endif()

add_subdirectory(core-functionality)
add_subdirectory(hello-app)
add_subdirectory(core-test)

#enable_testing()
#add_subdirectory(tests)
