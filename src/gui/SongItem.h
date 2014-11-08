/*
 * SongItem.h
 *
 *  Created on: Nov 6, 2014
 *      Author: gerlof
 */
#include <gtkmm/box.h>
#include <gtkmm/label.h>

#ifndef SONGITEM_H_
#define SONGITEM_H_

class Song;

class SongItem : public Gtk::HBox {
public:
	SongItem(Song* song);
	virtual ~SongItem();
};

#endif /* SONGITEM_H_ */
