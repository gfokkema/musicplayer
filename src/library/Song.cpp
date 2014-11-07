/*
 * Song.cpp
 *
 *  Created on: Nov 5, 2014
 *      Author: gerlof
 */
#include "Song.h"

Song::Song(int number, std::string artist, std::string disc, std::string title)
: m_number(number), m_artist(artist), m_disc(disc), m_title(title)
{
}

Song::~Song()
{
}

std::string
Song::getTitle()
{
	return m_title;
}
