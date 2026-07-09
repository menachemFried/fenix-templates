cmake_minimum_required(VERSION 3.15)
project(FenixApp CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -g3 -O0")

include_directories(UserApp/Inc)

file(GLOB_RECURSE SOURCES "UserApp/Src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})
