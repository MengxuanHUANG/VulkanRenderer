cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_MOUDULE_PATH ${CMAKE_MOUDULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

project(vulkan_renderer)

OPTION(USE_D2D_WSI "Use Direct to Display Swapchain" OFF)

find_package(Vulkan REQUIRED)

set(CMAKE_CXX_STANDARD 20)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
add_subdirectory(external)
add_subdirectory(src)