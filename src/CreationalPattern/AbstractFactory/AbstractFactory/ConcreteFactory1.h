#ifndef _HEADER_ConcreteFactory1_
#define _HEADER_ConcreteFactory1_

#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class ConcreteFactory1 :public AbstractFactory
{
public:
	ConcreteFactory1();
	virtual	~ConcreteFactory1();

	virtual AbstractProductA* createProductA();
	virtual AbstractProductB* createProductB();

private:

};

#endif // !_HEADER_ConcreteFactory1_

