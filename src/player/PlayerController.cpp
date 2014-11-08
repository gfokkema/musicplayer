/*
 * PlayerController.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerController.h"

#include <iostream>
#include "playercommand/PlayerCommandPlay.h"

PlayerController::PlayerController(PlayerModel* player)
: p_player(player)
{
}

PlayerController::~PlayerController()
{
}

void
PlayerController::on_next_pressed()
{
	// DO NOTHING YET
}

void
PlayerController::on_pause_pressed()
{
	// DO NOTHING YET
}

void
PlayerController::on_play_pressed()
{
	std::cout << "Signal \"play\" received" << std::endl;
	PlayerCommandPlay(p_player).execute();
}

void
PlayerController::on_previous_pressed()
{
	// DO NOTHING YET
}

void
PlayerController::on_stop_pressed()
{
	// DO NOTHING YET
}
