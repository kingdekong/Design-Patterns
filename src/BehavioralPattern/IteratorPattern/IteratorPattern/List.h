/*
 * List.h
 *
 *  Created on: Apr 18, 2017
 *      Author: Robert Larson
 */

#ifndef LIST_H_
#define LIST_H_

#include "Iterator.h"

template <class Item>
class List {
public:
	virtual Iterator<Item> * CreateIterator() const = 0;
	virtual unsigned int Count() const              = 0;
	virtual void Append(Item item)                  = 0;
};

#endif /* LIST_H_ */
