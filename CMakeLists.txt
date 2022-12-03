cmake_minimum_required(VERSION 3.25.0)
project(OpenglTut VERSION 0.1.0)


# add_subdirectory(lib/external)

# Run: git submodule update --init --recursive
# if having submodule trouble

# Add glfw stuff
add_subdirectory(lib/external/glfw)
option(GLFW_BUILD_DOCS OFF)
option(GLFW_BUILD_EXAMPLES OFF)
option(GLFW_BUILD_TESTS OFF)

# message("I am here top")

# target_link_libraries(${PROJECT_NAME}_exe gameManager displayManager)

add_subdirectory(src)

# For loop add subdirectories
# foreach (sub "src" "${GLFW_DIR}" "${GLAD_DIR}" "sr≠c/RenderEngine")
#     add_subdirectory("${sub}")
# endforeach ()


# include(CTest)
# enable_testing()

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
