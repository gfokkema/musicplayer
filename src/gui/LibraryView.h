/*
 * LibraryView.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include <gtkmm-3.0/gtkmm.h>

#include "library/LibraryController.h"

#ifndef LIBRARYVIEW_H_
#define LIBRARYVIEW_H_

class LibraryView : public Gtk::Grid {
public:
	LibraryView(LibraryController* controller);
	virtual ~LibraryView();
};

#endif /* LIBRARYVIEW_H_ */
