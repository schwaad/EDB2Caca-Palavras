cmake_minimum_required(VERSION 3.10)

project(EDB2CacaPalavras)

include_directories(include)

file(GLOB SOURCES "src/*.c")
add_executable(EDB2CacaPalavras ${SOURCES})

set(CMAKE_C_STANDARD 99)
