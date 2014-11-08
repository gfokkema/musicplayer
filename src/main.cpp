#include <gtkmm-3.0/gtkmm.h>

#include "gui/MainWindow.h"
#include "gui/LibraryView.h"
#include "gui/PlayerView.h"
#include "library/LibraryController.h"
#include "library/LibraryModel.h"
#include "library/Song.h"
#include "player/PlayerController.h"
#include "player/PlayerModel.h"

int main(int argc, char* argv[])
{
	Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.examples.base");

	boost::filesystem::path p("/mnt/fokkema/muziek/Flaw/Through the Eyes/08 What I Have to Do.flac");
	Song* song = new Song("Flaw", "Through the Eyes", 8, "What I have to do", p);

	PlayerModel* player = new PlayerModel(std::vector<Song*> { song });
	PlayerController* playerc = new PlayerController(player);

	LibraryModel* library = new LibraryModel;
	LibraryController* libraryc = new LibraryController(library);
	library->addSong(song);

	MainWindow window(Gtk::manage(new LibraryView(libraryc)), Gtk::manage(new PlayerView(playerc)));
	window.set_default_size(400, 200);

	return app->run(window);
}
