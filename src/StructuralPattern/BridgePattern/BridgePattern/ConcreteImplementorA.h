#ifndef _HEADER_ConcreteImplementorA_
#define _HEADER_ConcreteImplementorA_
#include "Implementor.h"

class ConcreteImplementorA :public Implementor
{
public:
	ConcreteImplementorA();
	virtual	~ConcreteImplementorA();
	
	virtual void operationImp();
private:

};


#endif // !_HEADER_ConcreteImplementorA_

