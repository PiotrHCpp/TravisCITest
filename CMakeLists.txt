cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(TravisCITest)

set(SRC_LIST
    palindrome.cpp
)

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Werror -Wpedantic -Wextra -Wconversion)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR})
