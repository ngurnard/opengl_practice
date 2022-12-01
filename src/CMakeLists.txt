# add_executable(${PROJECT_NAME} main.cpp)

# Get these files
# target_link_libraries(${PROJECT_NAME} PUBLIC
#     glfw
#     glad
# )

add_subdirectory(RenderEngine)
target_link_libraries($${PROJECT_NAME} displayManager)