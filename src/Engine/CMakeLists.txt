# cmake_minimum_required(VERSION 3.25.0)
# project(Engine VERSION 0.1.0)

# ## Building
# # create libararies
add_library(gameManager 
    gameManager.h
    gameManager.cpp  # target
)




# # setup include directories 
# target_include_directories(gameManager PRIVATE gameManager.h)
# message("I am here engine")

# add_executable()
# target_link_libraries(gameManager displayManager glfw)



target_sources(
    ${target}

    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/gameManager.h
    ${CMAKE_CURRENT_SOURCE_DIR}/gameManager.cpp
)