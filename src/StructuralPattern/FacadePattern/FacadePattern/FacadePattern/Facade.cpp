#include "Facade.h"

Facade::Facade()
{
	m_SystemA = new SystemA();
	m_SystemB = new SystemB();
	m_SystemC = new SystemC();
}

Facade::~Facade()
{
	delete m_SystemA;
	delete m_SystemB;
	delete m_SystemC;
}

void Facade::wrapOpration()
{
	m_SystemA->operationA();
	m_SystemB->operationB();
	m_SystemC->operationC();
}
