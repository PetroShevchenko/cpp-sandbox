cmake_minimum_required (VERSION 3.5)

set(PROJECT_NAME "player_test")
set(SRC_LIST src/Parser.cpp src/AudioDecoder.cpp src/VideoDecoder.cpp src/Player.cpp tests/Player_test.cpp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wpedantic -Wshadow -Wundef -Wno-missing-field-initializers")

project (${PROJECT_NAME})

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC_LIST})
