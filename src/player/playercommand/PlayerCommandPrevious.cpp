/*
 * PlayerCommandPrevious.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: gerlof
 */
#include "PlayerCommandPrevious.h"

#include <iostream>
#include "player/PlayerModel.h"

void
PlayerCommandPrevious::execute()
{
	std::cout << "Executing player previous" << std::endl;
	p_player->previous();
}

void
PlayerCommandPrevious::undo()
{
	std::cout << "Undo player previous" << std::endl;
	p_player->next();
}
