/*
 * PlayerController.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerModel.h"

#ifndef PLAYERCONTROLLER_H_
#define PLAYERCONTROLLER_H_

class PlayerController {
public:
	PlayerController(PlayerModel* player);
	virtual ~PlayerController();
private:
	PlayerModel* p_player;
};

#endif /* PLAYERCONTROLLER_H_ */
