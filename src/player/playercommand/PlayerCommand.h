/*
 * PlayerCommand.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */

#ifndef PLAYERCOMMAND_H_
#define PLAYERCOMMAND_H_

class PlayerModel;

class PlayerCommand {
public:
	PlayerCommand(PlayerModel* player) : p_player(player) {};

	virtual void execute() = 0;
	virtual void undo() = 0;
protected:
	PlayerModel* p_player;
};

#endif /* PLAYERCOMMAND_H_ */
