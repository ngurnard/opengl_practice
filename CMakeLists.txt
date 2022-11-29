cmake_minimum_required(VERSION 3.25.0)
project(OpenglTut VERSION 0.1.0)

# include(CTest)
# enable_testing()

add_executable(${PROJECT_NAME}_exe src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
