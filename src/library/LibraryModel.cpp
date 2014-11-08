/*
 * LibraryModel.cpp
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include "LibraryModel.h"

#include "Song.h"

LibraryModel::LibraryModel()
{
}

LibraryModel::~LibraryModel()
{
}

void
LibraryModel::addSong(Song* song) {
	m_songs.push_back(song);
	notifyObservers();
}

std::vector<Song*>
LibraryModel::getSong(std::string filter) {
	return m_songs;
}

void
LibraryModel::notifyObservers()
{
	for (LibraryObserver* obs : m_observers) {
		obs->update();
	}
}

void
LibraryModel::registerObserver(LibraryObserver* obs)
{
	m_observers.push_back(obs);
}

void
LibraryModel::removeObservers()
{
	m_observers.clear();
}
