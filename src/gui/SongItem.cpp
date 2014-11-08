/*
 * SongItem.cpp
 *
 *  Created on: Nov 6, 2014
 *      Author: gerlof
 */

#include "SongItem.h"

#include "library/Song.h"

SongItem::SongItem(Song* song)
{
	add(*Gtk::manage(new Gtk::Label(song->getArtist())));
	add(*Gtk::manage(new Gtk::Label(song->getDisc())));
	add(*Gtk::manage(new Gtk::Label(std::to_string(song->getNumber()))));
	add(*Gtk::manage(new Gtk::Label(song->getTitle())));
}

SongItem::~SongItem() {
}

