#ifndef _HEADER_ConcreteProductB_
#define _HEADER_ConcreteProductB_

#include "../head/Product.h"
class ConcreteProductB : public Product
{
public:
	ConcreteProductB();
	virtual ~ConcreteProductB();

	virtual void Use();

};
#endif // !_HEADER_ConcreteProductB_
