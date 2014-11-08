/*
 * PlayerCommandPlay.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerCommandPlay.h"

#include <iostream>
#include "player/PlayerModel.h"

void
PlayerCommandPlay::execute()
{
	std::cout << "Executing player start" << std::endl;
	p_player->play();
}

void
PlayerCommandPlay::undo()
{
	p_player->pause();
}
