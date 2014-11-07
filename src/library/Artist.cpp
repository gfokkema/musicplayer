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
