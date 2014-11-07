/*
 * LibraryItem.h
 *
 *  Created on: Nov 7, 2014
 *      Author: gerlof
 */
#include <string>

#ifndef LIBRARYITEM_H_
#define LIBRARYITEM_H_

class LibraryItem {
public:
	virtual std::string getTitle() = 0;

	//virtual bool getChildren() = 0;
	//virtual bool hasChildren() = 0;
};

#endif /* LIBRARYITEM_H_ */
