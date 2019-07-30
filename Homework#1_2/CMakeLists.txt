cmake_minimum_required (VERSION 3.10)

set(PROJECT_NAME "test1")
#set(PROJECT_NAME "test2")

set(SRC_LIST src/math_opers.cpp tests/math_opers_test.cpp)
#set(SRC_LIST src/bits_opers.cpp tests/bits_opers_test.cpp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Wshadow -Wundef -Wno-missing-field-initializers")

project (${PROJECT_NAME})

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC_LIST})

