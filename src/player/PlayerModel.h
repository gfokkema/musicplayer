/*
 * Player.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include <glibmm-2.4/glibmm.h>
#include <gstreamermm-1.0/gstreamermm.h>
#include <gstreamermm-1.0/gstreamermm/playbin.h>

#include "core/Observable.h"

#ifndef PLAYERMODEL_H_
#define PLAYERMODEL_H_

class Song;

class PlayerModel : public Observable {
public:
	PlayerModel();
	PlayerModel(std::vector<Song*> playlist);
	virtual ~PlayerModel();

	void previous();
	void play();
	void pause();
	void stop();
	void next();

	Song* nowPlaying() { return p_nowplaying; }

	bool on_bus_message(const Glib::RefPtr<Gst::Bus>& /* bus */,
						const Glib::RefPtr<Gst::Message>& message);

	void				add(Song* song);
	std::vector<Song*>	getPlaylist();
private:
	Glib::RefPtr<Glib::MainLoop>	p_mainloop;
	Glib::RefPtr<Gst::PlayBin> 		p_playbin;
	std::vector<Song*>				m_playlist;
	Song*							p_nowplaying;
};

#endif /* PLAYERMODEL_H_ */
