/*
 * Artist.cpp
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */

#include "Artist.h"

Artist::Artist(std::string artist)
: m_artist(artist)
{
}

Artist::~Artist()
{
}

std::string
Artist::getTitle()
{
	return m_artist;
}

void
Artist::setTitle(std::string artist) {
	m_artist = artist;
}

void
Artist::addChild(LibraryItem* child) {
	m_children.push_back(child);
}

std::vector<LibraryItem*>::iterator
Artist::getChildren()
{
	return m_children.begin();
}

bool
Artist::hasChildren()
{
	return !m_children.empty();
}
