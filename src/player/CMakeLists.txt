add_subdirectory(playercommand)

set (player_sources
	PlayerController.cpp
	PlayerModel.cpp
)

add_library (player ${player_sources})
target_link_libraries(player playercommand ${GSTREAMERMM_LIBRARIES})
