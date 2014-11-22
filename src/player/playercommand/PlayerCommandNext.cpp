/*
 * PlayerCommandNext.cpp
 *
 *  Created on: Nov 21, 2014
 *      Author: gerlof
 */

#include "PlayerCommandNext.h"

#include <iostream>
#include "player/PlayerModel.h"

void
PlayerCommandNext::execute()
{
	std::cout << "Executing player next" << std::endl;
	p_player->next();
}

void
PlayerCommandNext::undo()
{
	std::cout << "Undo player next" << std::endl;
	p_player->previous();
}
