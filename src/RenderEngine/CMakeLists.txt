# cmake_minimum_required(VERSION 3.25.0)
# project(RenderEngine VERSION 0.1.0)

# ## Building
# # create libararies
# # add_library(libraryName
# #             [STATIC|SHARED|MODULE]
# #             [EXCLUDE_FROM_ALL]
# #             source1 source2 ....)
# add_library(displayManager 
#     displayManager.cpp  # target
# )

# # # setup include directories 
# # target_include_directories(displayManager_lib PUBLIC 
# # 	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
# #  	$<INSTALL_INTERFACE:include>
# # )
# # setup include directories 
# # target_include_directories(displayManager INTERFACE
# # 	displayManager.h
# # )
# target_include_directories(displayManager PRIVATE displayManager.h)
# message("I am here render")

# if(NOT displayManager_POPULATED)
#     message("displayManager populated!")
# endif()
# target_link_libraries(displayManager glfw)
# # target_link_libraries(RenderEngine glfw)

target_sources(
    ${target}

    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/displayManager.h
    ${CMAKE_CURRENT_SOURCE_DIR}/displayManager.cpp
)