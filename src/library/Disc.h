/*
 * Disc.h
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include "LibraryItem.h"

#ifndef DISC_H_
#define DISC_H_

class Artist;

class Disc : public LibraryItem {
public:
	Disc(std::string disc, Artist* artist);
	virtual ~Disc();

	virtual std::string					getTitle();
	virtual void						setTitle(std::string disc);

	virtual void								addChild(LibraryItem* child);
	virtual std::vector<LibraryItem*>::iterator	getChildren();
	virtual bool								hasChildren();
private:
	std::string	m_disc;
	Artist*		p_artist;

	std::vector<LibraryItem*> m_children;
};

#endif /* DISC_H_ */
