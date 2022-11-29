cmake_minimum_required(VERSION 3.25.0)
project(OpenglTut VERSION 0.1.0)

# include(CTest)
# enable_testing()

# Turn off GLFW Options
# option(GLFW_BUILD_DOCS OFF)
# option(GLFW_BUILD_EXAMPLES OFF)
# option(GLFW_BUILD_TESTS OFF)
# add_subdirectory("lib/external/glfw")


add_executable(${PROJECT_NAME}_exe src/main.cpp)

# Add subdirectories
# add_subdirectory("lib/external/glad")
# add_subdirectory("src/RenderEngine")
# add_subdirectory("src/Engine")
# add_subdirectory("${GLFW_DIR}")
# add_subdirectory("${GLAD_DIR}")

# For loop add subdirectories
# foreach (sub "src" "${GLFW_DIR}" "${GLAD_DIR}" "src/RenderEngine")
#     add_subdirectory("${sub}")
# endforeach ()

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
