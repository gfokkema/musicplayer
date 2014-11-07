/*
 * Bar.cpp
 *
 *  Created on: Nov 2, 2014
 *      Author: gerlof
 */

#include <gtkmm/menu.h>
#include <gtkmm/menuitem.h>

#include <iostream>

#include "Bar.h"

Bar::Bar() {
	Gtk::MenuItem *bar_file = Gtk::manage(new Gtk::MenuItem("_File", true));
	Gtk::MenuItem *bar_settings = Gtk::manage(new Gtk::MenuItem("_Settings", true));

	Gtk::Menu *menu_file = Gtk::manage(new Gtk::Menu());
	Gtk::MenuItem *menuitem_open = Gtk::manage(new Gtk::MenuItem("_Open", true));
	menuitem_open->signal_activate().connect(sigc::mem_fun(*this, &Bar::on_open));
	Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
	menu_file->append(*menuitem_open);
	menu_file->append(*menuitem_quit);
	bar_file->set_submenu(*menu_file);
	append(*bar_file);

	Gtk::Menu *menu_settings = Gtk::manage(new Gtk::Menu());
	Gtk::MenuItem *menuitem_settings = Gtk::manage(new Gtk::MenuItem("_Settings", true));
	menu_settings->append(*menuitem_settings);
	bar_settings->set_submenu(*menu_settings);
	append(*bar_settings);
}

Bar::~Bar() {
	// TODO Auto-generated destructor stub
}

void Bar::on_open() {
	std::cout << "open file dialog is shown" << std::endl;
}
