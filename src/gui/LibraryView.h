/*
 * LibraryView.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include <gtkmm/box.h>

#include "library/LibraryController.h"

#ifndef LIBRARYVIEW_H_
#define LIBRARYVIEW_H_

class LibraryView : public Gtk::VBox {
public:
	LibraryView(LibraryController* controller);
	virtual ~LibraryView();
};

#endif /* LIBRARYVIEW_H_ */
