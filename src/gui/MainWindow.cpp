/*
 * MainWindow.cpp
 *
 *  Created on: Nov 2, 2014
 *      Author: gerlof
 */
#include "MainWindow.h"

#include "Bar.h"
#include "LibraryView.h"
#include "PlayerView.h"

MainWindow::MainWindow(LibraryView* libarywidget, PlayerView* playerwidget)
{
	set_border_width(10);

	Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
	Bar *bar = Gtk::manage(new Bar());
	vbox->pack_start(*bar, Gtk::PACK_SHRINK, 0);
	//vbox->add(*libarywidget);
	//vbox->add(*playerwidget);

	add(*vbox);
	show_all();
}

MainWindow::~MainWindow()
{
}
