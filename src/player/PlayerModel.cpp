/*
 * Player.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "PlayerModel.h"

#include <iostream>

#include "library/Song.h"

PlayerModel::PlayerModel(std::vector<Song*> playlist)
: m_playlist(playlist), p_nowplaying(m_playlist.begin())
{
	Gst::init();
	p_playbin = Gst::PlayBin::create();

	if(!p_playbin)
	{
		std::cerr << "The playbin could not be created." << std::endl;
	}

	// Get the bus from the playbin, and add a bus watch
	Glib::RefPtr<Gst::Bus> bus = p_playbin->get_bus();
	bus->add_watch(sigc::mem_fun(this, &PlayerModel::on_bus_message));

	// Init the player with the first file
	Song* song = *p_nowplaying;
	p_playbin->property_uri() = Glib::filename_to_uri(song->getPath());
}


PlayerModel::~PlayerModel()
{
	p_playbin->set_state(Gst::STATE_NULL);
}

void
PlayerModel::previous()
{
	p_playbin->set_state(Gst::STATE_NULL);
	Song* song = *--p_nowplaying;
	p_playbin->property_uri() = Glib::filename_to_uri(song->getPath());
	p_playbin->set_state(Gst::STATE_PLAYING);
	notifyObservers();
}

void
PlayerModel::play()
{
	p_playbin->set_state(Gst::STATE_PLAYING);
	notifyObservers();
}

void
PlayerModel::pause()
{
	p_playbin->set_state(Gst::STATE_PAUSED);
	notifyObservers();
}

void
PlayerModel::stop()
{
	p_playbin->set_state(Gst::STATE_NULL);
	notifyObservers();
}

void
PlayerModel::next()
{
	p_playbin->set_state(Gst::STATE_NULL);
	Song* song = *++p_nowplaying;
	p_playbin->property_uri() = Glib::filename_to_uri(song->getPath());
	p_playbin->set_state(Gst::STATE_PLAYING);
	notifyObservers();
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

Gst::State
PlayerModel::getState()
{
	Gst::State state, pending;
	p_playbin->get_state(state, pending, 0);
	return state;
}

// This function is used to receive asynchronous messages in the main loop.
bool
PlayerModel::on_bus_message(const Glib::RefPtr<Gst::Bus>& /* bus */,
                            const Glib::RefPtr<Gst::Message>& message)
{
	switch(message->get_message_type()) {
		case Gst::MESSAGE_EOS:
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

			return false;
		}
		default:
			break;
	}

	return true;
}
