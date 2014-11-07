cmake_minimum_required (VERSION 2.6)
 
project (musicplayer)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/../modules" ${CMAKE_MODULE_PATH})

find_package (PkgConfig REQUIRED)
pkg_check_modules(GTKMM REQUIRED gtkmm-3.0)
include_directories(${GTKMM_INCLUDE_DIRS})

add_definitions(-std=c++11)

add_subdirectory(gui)
add_subdirectory(library)

set (main
	main.cpp
	Bar.cpp
	MainWindow.cpp
)

add_executable (project ${main})
target_link_libraries (project gui library ${GTKMM_LIBRARIES})
