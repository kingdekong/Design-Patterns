#include "CheesePizza.h"
#include <iostream>

CheesePizza::CheesePizza() : Pizza(std::string("Cheese Pizza"))
{
}

CheesePizza::~CheesePizza()
{
}

void CheesePizza::AddToppings()
{
	std::cout << "adding cheese topping\n";
}
