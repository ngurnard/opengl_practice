set(target ${PROJECT_NAME})

add_executable(${target})

target_sources(
    ${target}

    PRIVATE

    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

add_subdirectory(RenderEngine)
add_subdirectory(Engine)
message("HEELO")
target_include_directories(
    ${target}

    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(${target} PRIVATE gameManager glfw)

# target_link_libraries($${PROJECT_NAME} displayManager)