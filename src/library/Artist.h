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

	virtual std::string					getTitle();
	virtual void						setTitle(std::string artist);

	virtual void								addChild(LibraryItem* child);
	virtual std::vector<LibraryItem*>::iterator	getChildren();
	virtual bool								hasChildren();
private:
	std::string m_artist;

	std::vector<LibraryItem*> m_children;
};

#endif /* ARTIST_H_ */
