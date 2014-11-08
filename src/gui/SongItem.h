/*
 * SongItem.h
 *
 *  Created on: Nov 6, 2014
 *      Author: gerlof
 */
#include <gtkmm-3.0/gtkmm.h>

#ifndef SONGITEM_H_
#define SONGITEM_H_

class Song;

class SongItem : public Gtk::Grid {
public:
	SongItem(Song* song);
	virtual ~SongItem();
};

#endif /* SONGITEM_H_ */
