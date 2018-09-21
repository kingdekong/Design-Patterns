#ifndef _HEADER_ConcreteProductA_
#define _HEADER_ConcreteProductA_

#include "../head/Product.h"
class ConcreteProductA : public Product
{
public:
	ConcreteProductA();
	virtual	~ConcreteProductA();

	virtual void Use();

private:

};

#endif // !_HEADER_ConcreteProductA_