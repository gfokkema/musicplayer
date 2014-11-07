/*
 * MainWindow.h
 *
 *  Created on: Nov 2, 2014
 *      Author: gerlof
 */
#include <gtkmm/window.h>

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

class LibraryModel;
class Song;

class MainWindow : public Gtk::Window {
public:
	MainWindow(LibraryModel* model);
	virtual ~MainWindow();
private:
	void on_button_clicked();
};

#endif /* MAINWINDOW_H_ */
