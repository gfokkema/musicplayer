/*
 * LibraryModel.h
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include <string>
#include <vector>

#include "core/Observable.h"

#ifndef LIBRARYMODEL_H_
#define LIBRARYMODEL_H_

// FORWARD DECLARATIONS
class Song;

class LibraryModel : public Observable {
public:
	LibraryModel();
	virtual ~LibraryModel();

	void				addSong(Song* song);
	std::vector<Song*>	getSong(std::string filter);
private:
	std::vector<Song*> m_songs;
};

#endif /* LIBRARYMODEL_H_ */
