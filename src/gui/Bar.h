/*
 * Bar.h
 *  Displays the menu bar on top of the screen.
 *
 *  Created on: Nov 2, 2014
 *      Author: gerlof
 */

#include <gtkmm/menubar.h>

#ifndef BAR_H_
#define BAR_H_

class Bar : public Gtk::MenuBar {
public:
	Bar();
	virtual ~Bar();
};

#endif /* BAR_H_ */
