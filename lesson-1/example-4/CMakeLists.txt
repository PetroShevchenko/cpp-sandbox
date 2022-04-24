cmake_minimum_required (VERSION 3.10)

set(PROJECT_NAME "animal")

set(
	SRC_LIST
	animal.cpp
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(
	CMAKE_CXX_FLAGS
	"${CMAKE_CXX_FLAGS}\
	-Wall\
	-Wextra\
	-Wpedantic\
	-Wshadow\
	-Wundef\
	-Wno-missing-field-initializers"
)

project (${PROJECT_NAME})

add_executable(
	${PROJECT_NAME}
	${SRC_LIST}
)
