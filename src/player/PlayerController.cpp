/*
 * PlayerController.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerController.h"

#include <iostream>
#include "playercommand/PlayerCommandNext.h"
#include "playercommand/PlayerCommandPlay.h"
#include "playercommand/PlayerCommandPrevious.h"
#include "playercommand/PlayerCommandStop.h"

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
	std::cout << "Signal \"next\" received" << std::endl;
	PlayerCommandNext(p_player).execute();
}

void
PlayerController::on_pause_pressed()
{
	std::cout << "Signal \"pause\" received" << std::endl;
	PlayerCommandPlay(p_player).undo();
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
	std::cout << "Signal \"previous\" received" << std::endl;
	PlayerCommandPrevious(p_player).execute();
}

void
PlayerController::on_stop_pressed()
{
	std::cout << "Signal \"stop\" received" << std::endl;
	PlayerCommandStop(p_player).execute();
}
