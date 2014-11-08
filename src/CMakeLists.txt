cmake_minimum_required (VERSION 2.6)
 
project (musicplayer)

find_package (Boost REQUIRED filesystem system)
find_package (PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${GTKMM_INCLUDE_DIRS})

add_definitions(-std=c++11)

add_subdirectory(gui)
add_subdirectory(library)
add_subdirectory(player)

set (main
	main.cpp
)

add_executable (project ${main})
target_link_libraries (project gui library player ${GTKMM_LIBRARIES} ${Boost_LIBRARIES})
