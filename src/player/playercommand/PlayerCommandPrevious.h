/*
 * PlayerCommandPrevious.h
 *
 *  Created on: Nov 21, 2014
 *      Author: gerlof
 */
#include "PlayerCommand.h"

#ifndef PLAYERCOMMANDPREVIOUS_H_
#define PLAYERCOMMANDPREVIOUS_H_

class PlayerCommandPrevious : public PlayerCommand {
public:
	PlayerCommandPrevious(PlayerModel* player) : PlayerCommand(player) {};
	~PlayerCommandPrevious() {};

	virtual void execute();
	virtual void undo();
};

#endif /* PLAYERCOMMANDPREVIOUS_H_ */
