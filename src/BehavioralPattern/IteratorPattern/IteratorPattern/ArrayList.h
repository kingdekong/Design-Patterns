/*
 * ArrayList.h
 *
 *  Created on: Apr 18, 2017
 *      Author: Robert Larson
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

#include "List.h"

#include "ArrayListIterator.h"

const unsigned int MAXSIZEARRAY = 200;

template <class Item>
class Iterator;

template <class Item>
class ArrayList : public List<Item> {
public:
	ArrayList()
	: m_currentSize(0)
	{

	}
	virtual ~ArrayList()
	{

	}
	virtual Iterator<Item> * CreateIterator() const {
		return new ArrayListIterator<Item>(this);
	}
	virtual unsigned int Count() const {
       return m_currentSize;
	}

	virtual void Append(Item item) {
       if(m_currentSize < MAXSIZEARRAY)
       {
    	   m_array[m_currentSize] = item;
           m_currentSize++;
       }
    }


	virtual const Item& Get(unsigned int index) const
	{
       return m_array[index];
	}

private:
	Item m_array[MAXSIZEARRAY];
	unsigned int m_currentSize;
};

#endif /* STDVECTORLIST_H_ */
