/*
 * PlayerCommandStop.h
 *
 *  Created on: Nov 21, 2014
 *      Author: gerlof
 */
#include "PlayerCommand.h"

#ifndef PLAYERCOMMANDSTOP_H_
#define PLAYERCOMMANDSTOP_H_

class PlayerCommandStop : public PlayerCommand {
public:
	PlayerCommandStop(PlayerModel* player) : PlayerCommand(player) {};
	~PlayerCommandStop() {};

	virtual void execute();
	virtual void undo();
};

#endif /* PLAYERCOMMANDSTOP_H_ */
