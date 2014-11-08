/*
 * LibraryModel.h
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include <string>
#include <vector>

#ifndef LIBRARYMODEL_H_
#define LIBRARYMODEL_H_

// FORWARD DECLARATIONS
class Song;

class LibraryObserver {
public:
	virtual void update() = 0;
};

class LibraryModel {
public:
	LibraryModel();
	virtual ~LibraryModel();

	void					addSong(Song* song);
	std::vector<Song*>		getSong(std::string filter);

	void	notifyObservers();
	void	registerObserver(LibraryObserver* obs);
	void	removeObservers();
private:
	std::vector<LibraryObserver*> m_observers;
	std::vector<Song*> m_songs;
};

#endif /* LIBRARYMODEL_H_ */
