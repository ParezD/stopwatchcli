cmake_minimum_required(VERSION 3.30)
project(stopwatchcli VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_BUILD_TYPE Release)

set(INCLUDE_PTH ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(MAIN_SOURCE ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

add_library(BigNum ${CMAKE_CURRENT_SOURCE_DIR}/src/BigNum.cpp ${INCLUDE_PTH}/BigNum.h)

target_include_directories(BigNum PRIVATE ${INCLUDE_PTH})

target_link_libraries(BigNum)

message(Sources=${MAIN_SOURCE})

add_executable(${PROJECT_NAME} ${MAIN_SOURCE})

target_include_directories(${PROJECT_NAME} PRIVATE ${INCLUDE_PTH})

target_link_libraries(${PROJECT_NAME} BigNum)





