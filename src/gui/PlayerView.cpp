/*
 * PlayerView.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerView.h"

#include "gtkmm/label.h"

PlayerView::PlayerView(PlayerController* controller)
{
	add(*Gtk::manage(new Gtk::Label("Play button and the likes of it")));
}

PlayerView::~PlayerView() {
	// TODO Auto-generated destructor stub
}

