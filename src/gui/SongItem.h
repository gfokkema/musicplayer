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

class SongItem : public Gtk::Box {
public:
	SongItem(std::string title);
	virtual ~SongItem();
private:
	Gtk::Label *m_title;
};

#endif /* SONGITEM_H_ */
