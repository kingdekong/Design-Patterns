/*
 * Iterator.h
 *
 *  Created on: Apr 18, 2017
 *      Author: Robert Larson
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

template <class Item>
class Iterator {
public:
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() const = 0;
	virtual Item CurrentItem() const = 0;

};

#endif /* ITERATOR_H_ */
