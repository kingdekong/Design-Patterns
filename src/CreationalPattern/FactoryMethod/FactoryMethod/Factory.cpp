#include "Factory.h"
#include <iostream>
Factory::Factory()
{
}

Factory::~Factory()
{
}

Product * Factory::factoryMethod()
{
	std::cout << "Factory factoryMethod " << std::endl;
	return nullptr;
}
