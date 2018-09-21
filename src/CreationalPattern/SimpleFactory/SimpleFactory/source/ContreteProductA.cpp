#include <iostream>
#include "../head/ConcreteProductA.h"

ConcreteProductA::ConcreteProductA()
{
	std::cout << "ConcreteProductA Construct " << std::endl;
}

ConcreteProductA::~ConcreteProductA()
{
	std::cout << "~ConcreteProductA() Construct " << std::endl;
}

void ConcreteProductA::Use()
{
	std::cout << "ConcreteProductA Use()" << std::endl;
}
