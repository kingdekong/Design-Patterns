#include "Factory.h"
#include "ConcreteProductA.h"
#include "ConcreteProductB.h"

Factory::Factory()
{
}

Factory::~Factory()
{
}

Product * Factory::createProduct(string proname)
{
	if ("A" == proname)
	{
		return new ConcreteProductA();
	}
	else if ("B" == proname)
	{
		return new ConcreteProductB();
	}
	return nullptr;
}
