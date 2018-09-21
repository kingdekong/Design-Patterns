#include <iostream>
#include "../head/ConcreteProductB.h"
ConcreteProductB::ConcreteProductB()
{
	std::cout << "ConcreteProductB Construct " << std::endl;
}

ConcreteProductB::~ConcreteProductB()
{
	std::cout << "~ConcreteProductB() Construct " << std::endl;
}

void ConcreteProductB::Use()
{
	std::cout << "ConcreteProductB Use()" << std::endl;
}

