#include "Pizza.h"
#include <iostream>

Pizza::Pizza(std::string description) :m_description(description)
{
}

Pizza::~Pizza()
{
}

void Pizza::Prepare()
{
	std::cout << "Preparing a " << m_description << "...\n";
	PrepareDough();
	AddSauce();
	AddToppings();
	Bake();
	std::cout << "\n";
}

void Pizza::PrepareDough()
{
	std::cout << "preparing dough\n";
}

void Pizza::AddSauce()
{
	std::cout << "adding sauce\n";
}

void Pizza::Bake()
{
	std::cout << "bake pizza\n";
}
