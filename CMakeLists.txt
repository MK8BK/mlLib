cmake_minimum_required(VERSION 3.20)
project(MlLib VERSION 0.1 LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)


# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

set(SOURCES
  src/main.cpp
  src/linreg.cpp
)

add_executable(ml_cmd_client ${SOURCES})
target_include_directories(ml_cmd_client PRIVATE ${CMAKE_SOURCE_DIR}/include)
# target_compile_options(ml_cmd_client -O3)




