# cmake_minimum_required(VERSION 3.25.0)
# project(RenderEngine VERSION 0.1.0)

# ## Building
# # create libararies
# # add_library(libraryName
# #             [STATIC|SHARED|MODULE]
# #             [EXCLUDE_FROM_ALL]
# #             source1 source2 ....)
# add_library(displayManager_lib # name of the library
#     include/displayManager.h
#     src/displayManager.cpp
# )

# # # setup include directories 
# # target_include_directories(displayManager_lib PUBLIC 
# # 	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
# #  	$<INSTALL_INTERFACE:include>
# # )
# # setup include directories 
# target_include_directories(displayManager_lib PUBLIC 
# 	include
# )