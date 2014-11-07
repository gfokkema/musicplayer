/*
 * Disc.cpp
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include "Artist.h"
#include "Disc.h"

Disc::Disc(std::string disc, Artist* artist)
: m_disc(disc), p_artist(artist)
{
	if (artist != nullptr) artist->addChild(this);
}

Disc::~Disc() {
	// TODO Auto-generated destructor stub
}

std::string
Disc::getTitle() {
	return m_disc;
}

void
Disc::setTitle(std::string disc) {
	m_disc = disc;
}

void
Disc::addChild(LibraryItem* child) {
	m_children.push_back(child);
}

std::vector<LibraryItem*>::iterator
Disc::getChildren()
{
	return m_children.begin();
}

bool
Disc::hasChildren()
{
	return !m_children.empty();
}
