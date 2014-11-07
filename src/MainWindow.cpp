/*
 * MainWindow.cpp
 *
 *  Created on: Nov 2, 2014
 *      Author: gerlof
 */
#include <iostream>

#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/treeview.h>

#include "Bar.h"
#include "MainWindow.h"

#include "library/LibraryModel.h"
#include "library/Song.h"
#include "gui/SongItem.h"

MainWindow::MainWindow(LibraryModel* model)
{
	set_border_width(10);
	//m_button.signal_clicked().connect(sigc::mem_fun(*this,
	//		&MainWindow::on_button_clicked));

	Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
	Bar *bar = Gtk::manage(new Bar());
	vbox->pack_start(*bar, Gtk::PACK_SHRINK, 0);

	LibraryItem *item;
	for (LibraryItem* item : model->getItems("")) {
		vbox->add(*Gtk::manage(new SongItem(item->getTitle())));
	}

	add(*vbox);
	vbox->show_all();
}

MainWindow::~MainWindow() {
	// TODO Auto-generated destructor stub
}

void MainWindow::on_button_clicked() {
	std::cout << "Button clicked!" << std::endl;
}
