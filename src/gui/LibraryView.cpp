/*
 * LibraryView.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */

#include "LibraryView.h"

#include "SongItem.h"

LibraryView::LibraryView(LibraryController* controller)
{
	Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));

	for (Song* song : controller->getLibrary()->getSong("")) {
		vbox->pack_start(*Gtk::manage(new SongItem(song)), Gtk::PACK_EXPAND_WIDGET);
	}

	add(*vbox);
}

LibraryView::~LibraryView()
{
}
