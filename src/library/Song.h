/*
 * Song.h
 *
 *  Created on: Nov 5, 2014
 *      Author: gerlof
 */
#include "LibraryItem.h"

#ifndef SONG_H_
#define SONG_H_

class Artist;
class Disc;

class Song : public LibraryItem {
public:
	Song(int number, std::string title, Artist* artist = nullptr, Disc* disc = nullptr);
	virtual ~Song();

	virtual std::string					getTitle();
	virtual void						setTitle(std::string title);

	virtual void								addChild(LibraryItem* child) { return; }
	virtual std::vector<LibraryItem*>::iterator	getChildren() { return std::vector<LibraryItem*>().begin(); }
	virtual bool								hasChildren() { return false; }
private:
	int			m_number;
	std::string	m_title;
	Artist*		p_artist;
	Disc*		p_disc;
};

#endif /* SONG_H_ */
