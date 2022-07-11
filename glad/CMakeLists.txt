cmake_minimum_required(VERSION 3.22)

project(glad)


include_directories(${GLAD_INCLUDE_DIR})
include_directories(${GLFW_INCLUDE_DIR})

add_library(glad STATIC src/glad.c)






