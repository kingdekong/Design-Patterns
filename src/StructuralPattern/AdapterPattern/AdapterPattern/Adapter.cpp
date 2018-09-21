#include "Adapter.h"

Adapter::Adapter(Adaptee * adaptee)
{
	m_pAdaptee = adaptee;
}

Adapter::~Adapter()
{
}

void Adapter::request()
{
	m_pAdaptee->specificRequest();
}
