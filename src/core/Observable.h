/*
 * Observable.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include <vector>

#ifndef OBSERVABLE_H_
#define OBSERVABLE_H_

class Observable;

class Observer {
public:
	virtual void update(Observable* obs) = 0;
};

class Observable {
public:
	Observable();
	virtual ~Observable();

	void	notifyObservers();
	void	registerObserver(Observer* obs);
	void	removeObservers();
private:
	std::vector<Observer*> m_observers;
};

#endif /* OBSERVABLE_H_ */
