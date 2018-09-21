#ifndef _HEADER_ConcreteSubject_
#define _HEADER_ConcreteSubject_
#include "Subject.h"
class ConcreteSubject :public Subject
{
public:
	ConcreteSubject();
	virtual	~ConcreteSubject();

	virtual int getState();
	virtual void setState(int i);

private:
	int m_nState;
};

#endif // !_HEADER_ConcreteSubject_
