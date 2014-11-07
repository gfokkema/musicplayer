/*
 * Song.cpp
 *
 *  Created on: Nov 5, 2014
 *      Author: gerlof
 */
#include "Artist.h"
#include "Disc.h"
#include "Song.h"

Song::Song(int number, std::string title, Artist* artist, Disc* disc)
: m_number(number), m_title(title), p_artist(artist), p_disc(disc)
{
	if (artist != nullptr) p_artist->addChild(this);
	if (disc != nullptr) p_artist->addChild(this);
}

Song::~Song()
{
}

std::string
Song::getTitle()
{
	return m_title;
}

void
Song::setTitle(std::string title) {
	m_title = title;
}
