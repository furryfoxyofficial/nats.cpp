cmake_minimum_required(VERSION 3.16)

project(NATS LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set( SRC_MAIN
    "src/main.cpp"
)

add_executable(${CMAKE_PROJECT_NAME} ${SRC_MAIN})
