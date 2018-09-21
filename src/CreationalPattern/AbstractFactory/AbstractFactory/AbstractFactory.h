#ifndef _HEADER_AbstractFactory_
#define _HEADER_AbstractFactory_
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory
{
public:
	AbstractFactory();
virtual	~AbstractFactory();

virtual AbstractProductA* createProductA() = 0;
virtual AbstractProductB* createProductB() = 0;

private:

};

#endif // !_HEADER_AbstractFactory_

