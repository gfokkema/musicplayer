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
	for (Song* song : controller->getLibrary()->getSong("")) {
		add(*Gtk::manage(new SongItem(song)));
	}
}

LibraryView::~LibraryView()
{
}
