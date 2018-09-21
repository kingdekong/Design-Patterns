#include "Abstraction.h"

Abstraction::Abstraction()
{
}

Abstraction::Abstraction(Implementor * imp)
{
	m_pImp = imp;
}

Abstraction::~Abstraction()
{
	delete m_pImp;
}

void Abstraction::operation()
{
}
