/*
 * LibraryModel.cpp
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include "LibraryModel.h"

LibraryModel::LibraryModel() {
	// TODO Auto-generated constructor stub
}

LibraryModel::~LibraryModel() {
	// TODO Auto-generated destructor stub
}

void
LibraryModel::addItem(LibraryItem* item) {
	items.push_back(item);
	notifyObservers();
}

std::vector<LibraryItem*>
LibraryModel::getItems(std::string filter) {
	return items;
}

void
LibraryModel::notifyObservers()
{
	for (LibraryObserver* obs : observers) {
		obs->update();
	}
}

void
LibraryModel::registerObserver(LibraryObserver* obs)
{
	observers.push_back(obs);
}

void
LibraryModel::removeObservers()
{
	observers.clear();
}
