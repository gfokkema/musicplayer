/*
 * PlayerController.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerModel.h"
#include <thread>

#ifndef PLAYERCONTROLLER_H_
#define PLAYERCONTROLLER_H_

class PlayerController {
public:
	PlayerController(PlayerModel* player);
	virtual ~PlayerController();
private:
	PlayerModel* p_player;
	std::thread playerthread;
};

#endif /* PLAYERCONTROLLER_H_ */
