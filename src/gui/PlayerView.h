/*
 * PlayerView.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include <gtkmm-3.0/gtkmm.h>

#include "player/PlayerController.h"

#ifndef PLAYERVIEW_H_
#define PLAYERVIEW_H_

class PlayerView : public Gtk::Box {
public:
	PlayerView(PlayerController* controller);
	virtual ~PlayerView();
};

#endif /* PLAYERVIEW_H_ */
