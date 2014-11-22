/*
 * Observable.cpp
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */

#include "Observable.h"

Observable::Observable() {
}

Observable::~Observable() {
}

void
Observable::notifyObservers()
{
	for (Observer* obs : m_observers) {
		obs->update(this);
	}
}

void
Observable::registerObserver(Observer* obs)
{
	m_observers.push_back(obs);
}

void
Observable::removeObservers()
{
	m_observers.clear();
}
