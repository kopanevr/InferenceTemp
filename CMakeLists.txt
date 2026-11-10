cmake_minimum_required(VERSION 3.10)
project(TensorRT_App VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(
  GLOB_RECURSE
  SOURCES
  ${CMAKE_SOURCE_DIR}/src/*.cpp
  main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

set(TENSORRT_ROOT "${CMAKE_SOURCE_DIR}/thirdParty/TensorRT-11.4.0.106")

target_include_directories(
    ${PROJECT_NAME} PRIVATE
    "${CMAKE_SOURCE_DIR}/src"
    "${TENSORRT_ROOT}/include"
)

target_link_directories(${PROJECT_NAME} PRIVATE "${TENSORRT_ROOT}/lib")

target_link_libraries(${PROJECT_NAME} PRIVATE nvinfer)
