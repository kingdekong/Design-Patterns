/*
 * StdVectorList.h
 *
 *  Created on: Apr 18, 2017
 *      Author: Robert Larson
 */

#ifndef STDVECTORLIST_H_
#define STDVECTORLIST_H_

#include "List.h"

#include "StdVectorListIterator.h"

#include <algorithm>
#include <vector>

template <class Item>
class Iterator;

template <class Item>
class StdVectorList : public List<Item> {
public:
	StdVectorList()
	{

	}
	virtual ~StdVectorList()
	{

	}
	virtual Iterator<Item> * CreateIterator() const {
		return new StdVectorListIterator<Item>(this);
	}
	virtual unsigned int Count() const {
       return m_vector.size();
	}
	virtual void Append(Item item) {
       m_vector.push_back(item);
	}


	virtual const Item& Get(unsigned int index) const
	{
       return m_vector.at(index);
	}

private:
	std::vector<Item> m_vector;
};

#endif /* STDVECTORLIST_H_ */
