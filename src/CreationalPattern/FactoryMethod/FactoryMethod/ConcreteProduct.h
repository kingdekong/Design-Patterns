#ifndef _HEADER_CONCRETEPRODUCT_
#define _HEADER_CONCRETEPRODUCT_
#include "Product.h"
class ConcreteProduct :public Product
{
public:
	ConcreteProduct();
	virtual	~ConcreteProduct();

	virtual void use();

private:

};


#endif // !_HEADER_CONCRETEPRODUCT_

