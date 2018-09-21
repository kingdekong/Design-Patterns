#include "Subject.h"

Subject::Subject()
{
}

Subject::~Subject()
{
}

void Subject::attach(Obeserver * pObeserver)
{
	m_vtObj.push_back(pObeserver);
}

void Subject::detach(Obeserver * pObeserver)
{
	for (vector<Obeserver*>::iterator itr = m_vtObj.begin();
		itr != m_vtObj.end(); itr++)
	{
		if (*itr == pObeserver)
		{
			m_vtObj.erase(itr);
			return;
		}
	}
}

void Subject::notify()
{
	for (vector<Obeserver*>::iterator itr = m_vtObj.begin(); itr != m_vtObj.end(); itr++)
	{
		(*itr)->update(this);
	}
}
