/*
 * MainWindow.h
 *
 *  Created on: Nov 2, 2014
 *      Author: gerlof
 */
#include <gtkmm/window.h>

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

class LibraryView;
class PlayerView;

class MainWindow : public Gtk::Window {
public:
	MainWindow(LibraryView* libarywidget, PlayerView* playerwidget);
	virtual ~MainWindow();
};

#endif /* MAINWINDOW_H_ */
