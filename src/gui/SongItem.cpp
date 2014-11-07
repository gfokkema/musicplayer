/*
 * SongItem.cpp
 *
 *  Created on: Nov 6, 2014
 *      Author: gerlof
 */

#include "SongItem.h"

SongItem::SongItem(std::string title)
: m_title(Gtk::manage(new Gtk::Label(title)))
{
	add(*m_title);
}

SongItem::~SongItem() {
	// TODO Auto-generated destructor stub
}

