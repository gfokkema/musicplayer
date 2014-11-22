/*
 * PlayerCommandStop.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: gerlof
 */

#include "PlayerCommandStop.h"

#include <iostream>
#include "player/PlayerModel.h"

void
PlayerCommandStop::execute()
{
	std::cout << "Executing player stop" << std::endl;
	p_player->stop();
}

void
PlayerCommandStop::undo()
{
	std::cout << "Undo player stop" << std::endl;
	p_player->play();
}
