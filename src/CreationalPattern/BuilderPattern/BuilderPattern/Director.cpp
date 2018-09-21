#include "Director.h"

Director::Director()
{
}

Director::~Director()
{
}

Product * Director::construct()
{
	m_pBuilder->buildPartA();
	m_pBuilder->buildPartB();
	m_pBuilder->buildPartC();

	return m_pBuilder->getProductResult();
}

void Director::setBuilder(Builder * builder)
{
	m_pBuilder = builder;
}
