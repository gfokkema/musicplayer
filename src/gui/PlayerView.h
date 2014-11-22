/*
 * PlayerView.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include <gtkmm-3.0/gtkmm.h>

#include "core/Observable.h"
#include "player/PlayerController.h"

#ifndef PLAYERVIEW_H_
#define PLAYERVIEW_H_

class PlayerView : public Gtk::Box, public Observer {
public:
	PlayerView(PlayerController* controller);
	virtual ~PlayerView();

	virtual void update(Observable* obs);
};

#endif /* PLAYERVIEW_H_ */
