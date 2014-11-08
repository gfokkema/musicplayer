/*
 * PlayerController.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerController.h"

PlayerController::PlayerController(PlayerModel* player)
: p_player(player), playerthread(&PlayerModel::play, player)
{
}

PlayerController::~PlayerController()
{
	playerthread.join();
}

