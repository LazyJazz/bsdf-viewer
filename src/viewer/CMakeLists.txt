cmake_minimum_required(VERSION 3.22)


project(viewer)

include_directories(${GLAD_INCLUDE_DIR})

add_executable(bsdf-viewer main.cpp)




target_link_libraries(bsdf-viewer glfw glad)