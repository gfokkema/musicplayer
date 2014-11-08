/*
 * Song.cpp
 *
 *  Created on: Nov 5, 2014
 *      Author: gerlof
 */
#include "Song.h"

Song::Song(std::string artist, std::string disc, int number, std::string title, boost::filesystem::path path)
: m_artist(artist), m_disc(disc), m_number(number), m_title(title), m_path(path)
{
}

Song::~Song()
{
}

std::string
Song::getArtist()
{
	return m_artist;
}

std::string
Song::getDisc()
{
	return m_disc;
}

int
Song::getNumber()
{
	return m_number;
}

std::string
Song::getTitle()
{
	return m_title;
}

std::string
Song::getPath()
{
	return m_path.generic_string();
}

void
Song::setTitle(std::string title) {
	m_title = title;
}
