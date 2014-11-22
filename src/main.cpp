#include <gtkmm-3.0/gtkmm.h>

#include "gui/MainWindow.h"
#include "gui/LibraryView.h"
#include "gui/PlayerView.h"
#include "library/LibraryController.h"
#include "library/LibraryModel.h"
#include "library/Song.h"
#include "player/PlayerController.h"
#include "player/PlayerModel.h"

#include <iostream>

int main(int argc, char* argv[])
{
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

	boost::filesystem::path p1("/mnt/fokkema/muziek/Flaw/Through the Eyes/08 What I Have to Do.flac");
	boost::filesystem::path p2("/mnt/fokkema/muziek/Flaw/Through the Eyes/09 Inner Strength.flac");
	Song* song1 = new Song("Flaw", "Through the Eyes", 8, "What I have to do", p1);
	Song* song2 = new Song("Flaw", "Through the Eyes", 9, "Inner Strength", p2);

	PlayerModel* player = new PlayerModel(std::vector<Song*> { song1, song2 });
	PlayerController* playerc = new PlayerController(player);

	LibraryModel* library = new LibraryModel;
	LibraryController* libraryc = new LibraryController(library);
	library->addSong(song1);
	library->addSong(song2);

	MainWindow window(Gtk::manage(new LibraryView(libraryc)), Gtk::manage(new PlayerView(playerc)));
	window.set_default_size(400, 200);

	int ret = app->run(window);

	delete player;
	delete playerc;
	delete library;
	delete libraryc;

	return ret;
}
