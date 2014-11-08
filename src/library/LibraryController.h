/*
 * LibraryController.h
 *
 *  Created on: Nov 8, 2014
 *      Author: gerlof
 */
#include "LibraryModel.h"

#ifndef LIBRARYCONTROLLER_H_
#define LIBRARYCONTROLLER_H_

class LibraryController {
public:
	LibraryController(LibraryModel* library);
	virtual ~LibraryController();

	LibraryModel* getLibrary() { return p_library; }
private:
	LibraryModel* p_library;
};

#endif /* LIBRARYCONTROLLER_H_ */
