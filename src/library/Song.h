/*
 * Song.h
 *
 *  Created on: Nov 5, 2014
 *      Author: gerlof
 */
#include "LibraryItem.h"

#ifndef SONG_H_
#define SONG_H_

class Song : public LibraryItem {
public:
	Song(int number, std::string artist, std::string disc, std::string title);
	virtual ~Song();

	virtual std::string getTitle();
private:
	int			m_number;
	std::string	m_artist, m_disc, m_title;
};

#endif /* SONG_H_ */
