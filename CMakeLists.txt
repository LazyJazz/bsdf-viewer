cmake_minimum_required(VERSION 3.22)

project(bsdf-viewer)

set(GLFW_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/glfw/include)
add_subdirectory(glfw)
set(GLAD_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/glad/include)
add_subdirectory(glad)

include_directories(${GLAD_INCLUDE_DIR})

add_subdirectory(src/viewer)




