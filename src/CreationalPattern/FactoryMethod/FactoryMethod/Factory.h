#ifndef _HEADER_FACTORY_
#define _HEADER_FACTORY_
#include "Product.h"

class Factory
{
public:
	Factory();
	virtual	~Factory();

	virtual Product* factoryMethod();
private:

};

#endif