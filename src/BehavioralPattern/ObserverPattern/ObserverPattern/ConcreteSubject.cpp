#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
{
}

ConcreteSubject::~ConcreteSubject()
{
}

int ConcreteSubject::getState()
{
	return m_nState;
}

void ConcreteSubject::setState(int i)
{
	m_nState = i;
}
