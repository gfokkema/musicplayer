#include <gtkmm.h>

#include "MainWindow.h"

#include "library/Artist.h"
#include "library/Disc.h"
#include "library/LibraryModel.h"
#include "library/Song.h"

int main(int argc, char* argv[])
{
	Artist* artist = new Artist("Artist");
	Disc* disc = new Disc("Disc", artist);
	Song* song = new Song(1, "Title", artist, disc);

	LibraryModel *library = new LibraryModel;
	library->addItem(artist);
	library->addItem(disc);
	library->addItem(song);

	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

	MainWindow window(library);
	window.set_default_size(200, 200);

	return app->run(window);
}
