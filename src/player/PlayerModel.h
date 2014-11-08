/*
 * Player.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */

#ifndef PLAYERMODEL_H_
#define PLAYERMODEL_H_

class PlayerModel {
public:
	PlayerModel();
	virtual ~PlayerModel();

	void previous();
	void play();
	void pause();
	void stop();
	void next();
};

#endif /* PLAYERMODEL_H_ */
