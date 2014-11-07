/*
 * Artist.h
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include "LibraryItem.h"

#ifndef ARTIST_H_
#define ARTIST_H_

class Artist : public LibraryItem {
public:
	Artist(std::string artist);
	virtual ~Artist();

	virtual std::string getTitle();
private:
	std::string m_artist;
};

#endif /* ARTIST_H_ */
