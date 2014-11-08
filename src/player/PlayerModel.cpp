/*
 * Player.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerModel.h"

#include <iostream>

#include "library/Song.h"

PlayerModel::PlayerModel()
: PlayerModel(std::vector<Song*>())
{
}

PlayerModel::PlayerModel(std::vector<Song*> playlist)
: m_playlist(playlist)
{
	Gst::init();
	p_playbin = Gst::PlayBin::create();

	if(!p_playbin)
	{
		std::cerr << "The playbin could not be created." << std::endl;
	}
}


PlayerModel::~PlayerModel()
{
	p_playbin->set_state(Gst::STATE_NULL);
}

void
PlayerModel::play()
{
	p_nowplaying = m_playlist.front();
	p_playbin->property_uri() = Glib::filename_to_uri(p_nowplaying->getPath());

	// Create the main loop.
	p_mainloop = Glib::MainLoop::create();

	// Get the bus from the playbin, and add a bus watch to the default main
	// context with the default priority:
	Glib::RefPtr<Gst::Bus> bus = p_playbin->get_bus();
	bus->add_watch(sigc::mem_fun(this, &PlayerModel::on_bus_message));

	// Now set the playbin to the PLAYING state and start the main loop:
	std::cout << "Setting to PLAYING." << std::endl;
	p_playbin->set_state(Gst::STATE_PLAYING);
	std::cout << "Running." << std::endl;
	p_mainloop->run();
}

void
PlayerModel::pause()
{
	// DO NOTHING YET
}

void
PlayerModel::add(Song* song)
{
	m_playlist.push_back(song);
	notifyObservers();
}

std::vector<Song*>
PlayerModel::getPlaylist()
{
	return m_playlist;
}

// This function is used to receive asynchronous messages in the main loop.
bool
PlayerModel::on_bus_message(const Glib::RefPtr<Gst::Bus>& /* bus */,
		const Glib::RefPtr<Gst::Message>& message)
{
	switch(message->get_message_type()) {
	case Gst::MESSAGE_EOS:
		std::cout << std::endl << "End of stream" << std::endl;
		p_mainloop->quit();
		return false;
	case Gst::MESSAGE_ERROR:
	{
		Glib::RefPtr<Gst::MessageError> msgError =
				Glib::RefPtr<Gst::MessageError>::cast_static(message);

		if(msgError)
		{
			Glib::Error err;
			err = msgError->parse();
			std::cerr << "Error: " << err.what() << std::endl;
		}
		else
			std::cerr << "Error." << std::endl;

		p_mainloop->quit();
		return false;
	}
	default:
		break;
	}

	return true;
}
