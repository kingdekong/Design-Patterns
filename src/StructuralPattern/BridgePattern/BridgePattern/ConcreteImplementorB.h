#ifndef _HEADER_ConcreteImplementorB_
#define _HEADER_ConcreteImplementorB_

#include "Implementor.h"

class ConcreteImplementorB :public Implementor
{
public:
	ConcreteImplementorB();
	virtual ~ConcreteImplementorB();
	virtual void operationImp();
private:

};

#endif // !_HEADER_ConcreteImplementorB_

