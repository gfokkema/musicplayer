/*
 * PlayerCommandPlay.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerCommand.h"

#ifndef PLAYERCOMMANDPLAY_H_
#define PLAYERCOMMANDPLAY_H_

class PlayerCommandPlay : public PlayerCommand {
public:
	PlayerCommandPlay(PlayerModel* player) : PlayerCommand(player) {};
	~PlayerCommandPlay() {};

	virtual void execute();
	virtual void undo();
};

#endif /* PLAYERCOMMANDPLAY_H_ */
