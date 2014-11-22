/*
 * PlayerCommandNext.h
 *
 *  Created on: Nov 21, 2014
 *      Author: gerlof
 */
#include "PlayerCommand.h"

#ifndef PLAYERCOMMANDNEXT_H_
#define PLAYERCOMMANDNEXT_H_

class PlayerCommandNext : public PlayerCommand {
public:
	PlayerCommandNext(PlayerModel* player) : PlayerCommand(player) {};
	~PlayerCommandNext() {};

	virtual void execute();
	virtual void undo();
};

#endif /* PLAYERCOMMANDNEXT_H_ */
