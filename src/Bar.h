/*
 * Bar.h
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
protected:
	void on_open();
};

#endif /* BAR_H_ */
