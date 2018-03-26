project(ActuatorPlugin)
cmake_minimum_required(VERSION 2.8)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
list(APPEND CMAKE_CXX_FLAGS "${GAZEBO_CXX_FLAGS}")

add_library(CCrawler SHARED CCrawler.cpp)
target_link_libraries(CCrawler ${GAZEBO_LIBRARIES})

