#include "Builder.h"

Builder::Builder()
{
	m_prod = new Product();
}

Builder::~Builder()
{
}

void Builder::buildPartA()
{
}

void Builder::buildPartB()
{
}

void Builder::buildPartC()
{
}

Product*  Builder::getProductResult()
{
	return m_prod;
}
