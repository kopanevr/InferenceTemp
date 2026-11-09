cmake_minimum_required(VERSION 3.10)
project(TensorRT_App VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp)

set(TENSORRT_ROOT "${CMAKE_SOURCE_DIR}/thirdParty/TensorRT-11.4.1.31")

target_include_directories(${PROJECT_NAME} PRIVATE "${TENSORRT_ROOT}/include")

target_link_directories(${PROJECT_NAME} PRIVATE "${TENSORRT_ROOT}/lib")

target_link_libraries(${PROJECT_NAME} PRIVATE nvinfer)
