#include "ConcreteBuilder.h"

ConcreteBuilder::ConcreteBuilder()
{
}

ConcreteBuilder::~ConcreteBuilder()
{
}

void ConcreteBuilder::buildPartA()
{
	m_prod->setA("A style ");
}

void ConcreteBuilder::buildPartB()
{
	m_prod->setB("B style ");
}

void ConcreteBuilder::buildPartC()
{
	m_prod->setC("C style ");
}
