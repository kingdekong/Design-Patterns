#ifndef _HEADER_CONCRETEFACTORY_
#define _HEADER_CONCRETEFACTORY_

#include "Factory.h"
#include "ConcreteProduct.h"
class ConcreteFactory:public Factory
{
public:
	ConcreteFactory ();
virtual	~ConcreteFactory ();
virtual Product* factoryMethod();

private:

};

#endif // !_HEADER_CONCRETEFACTORY_

