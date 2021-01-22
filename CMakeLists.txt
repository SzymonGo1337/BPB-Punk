cmake_minimum_required(VERSION 3.15)
project(BPB-Punk)

if(WIN32)
    set(SFML_STATIC_LIBRARIES TRUE)
endif()

set(CMAKE_BUILD_TYPE Debug)
find_package(SFML 2.5 COMPONENTS graphics system window audio network REQUIRED)
add_executable(BPB-Punk source/main.cpp)
target_link_libraries(BPB-Punk sfml-graphics sfml-system sfml-window sfml-audio sfml-network)