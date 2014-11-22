/*
 * PlayerView.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerView.h"

#include <iostream>

PlayerView::PlayerView(PlayerController* controller)
{
	Gtk::Button* previous	= Gtk::manage(new Gtk::Button());
	Gtk::Button* play		= Gtk::manage(new Gtk::Button());
	Gtk::Button* stop		= Gtk::manage(new Gtk::Button());
	Gtk::Button* next		= Gtk::manage(new Gtk::Button());

	previous->set_image_from_icon_name("media-skip-backward");
	play	->set_image_from_icon_name("media-playback-start");
	stop	->set_image_from_icon_name("media-playback-stop");
	next	->set_image_from_icon_name("media-skip-forward");

	previous->signal_pressed()	.connect(sigc::mem_fun(controller, &PlayerController::on_previous_pressed));
	play->signal_pressed()		.connect(sigc::mem_fun(controller, &PlayerController::on_play_pressed));
	stop->signal_pressed()		.connect(sigc::mem_fun(controller, &PlayerController::on_stop_pressed));
	next->signal_pressed()		.connect(sigc::mem_fun(controller, &PlayerController::on_next_pressed));

	add(*previous);
	add(*play);
	add(*stop);
	add(*next);
}

PlayerView::~PlayerView()
{
}

void
PlayerView::update(Observable* obs)
{
	std::cout << "PlayerView notified!" << std::endl;
}
