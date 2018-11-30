cmake_minimum_required (VERSION 2.6)
set(CMAKE_CXX_STANDARD 11)

project (BinaryHeap)

include_directories(include)

set(srcs
	BinaryHeap.cpp
	)

if(EXISTS ${CMAKE_SOURCE_DIR}/main.cpp)
	add_executable(BinaryHeap ${srcs} main.cpp)
	target_compile_definitions(
		BinaryHeap
		PRIVATE
		DOCTEST_CONFIG_DISABLE
		)
endif()

if(EXISTS ${CMAKE_SOURCE_DIR}/test.cpp)
	add_executable(test_BinaryHeap ${srcs} test.cpp)
endif()
