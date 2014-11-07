#include <gtkmm.h>

#include "MainWindow.h"

#include "library/Artist.h"
#include "library/LibraryModel.h"
#include "library/Song.h"

int main(int argc, char* argv[])
{
	LibraryModel *library = new LibraryModel;
	library->addItem(new Song(1, "Artist", "Disc", "Title"));
	library->addItem(new Artist("Artist"));

	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

	MainWindow window(library);
	window.set_default_size(200, 200);

	return app->run(window);
}
