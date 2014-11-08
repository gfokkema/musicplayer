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

	void on_next_pressed();
	void on_pause_pressed();
	void on_play_pressed();
	void on_previous_pressed();
	void on_stop_pressed();
private:
	PlayerModel* p_player;
};

#endif /* PLAYERCONTROLLER_H_ */
