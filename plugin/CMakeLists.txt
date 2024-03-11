cmake_minimum_required(VERSION 3.1.0)
project(plugin_example)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(AdditionPlugin SHARED AdditionPlugin.cpp)

# Make sure to not prefix the binary's name with "lib" on Linux.
set_target_properties(AdditionPlugin PROPERTIES PREFIX "")

add_executable(host_app main.cpp)

# Link the dl library to the host application for dynamic loading
find_package(Threads REQUIRED)
target_link_libraries(host_app ${CMAKE_DL_LIBS})