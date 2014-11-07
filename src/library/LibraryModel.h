/*
 * LibraryModel.h
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include <string>
#include <vector>

#ifndef LIBRARYMODEL_H_
#define LIBRARYMODEL_H_

// FORWARD DECLARATIONS
class LibraryItem;

class LibraryObserver {
public:
	virtual void update() = 0;
};

class LibraryModel {
public:
	LibraryModel();
	virtual ~LibraryModel();

	void						addItem(LibraryItem* item);
	std::vector<LibraryItem*>	getItems(std::string filter);

	void	notifyObservers();
	void	registerObserver(LibraryObserver* obs);
	void	removeObservers();
private:
	std::vector<LibraryItem*> items;
	std::vector<LibraryObserver*> observers;
};

#endif /* LIBRARYMODEL_H_ */
