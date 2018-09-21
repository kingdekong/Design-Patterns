#include "ConcreteFactory.h"
#include <iostream>
ConcreteFactory::ConcreteFactory()
{
}

ConcreteFactory::~ConcreteFactory()
{
}

Product * ConcreteFactory::factoryMethod()
{
	std::cout << "ConcreteFactory factoryMethod " << std::endl;
	return new ConcreteProduct();
}
