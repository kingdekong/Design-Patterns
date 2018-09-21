#ifndef _HEADER_ConcreteFactory2_
#define _HEADER_ConcreteFactory2_

#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
class ConcreteFactory2 : public AbstractFactory
{

public:
	ConcreteFactory2();
	virtual ~ConcreteFactory2();

	virtual AbstractProductA * createProductA();
	virtual AbstractProductB * createProductB();

};

#endif // !_HEADER_ConcreteFactory2_

