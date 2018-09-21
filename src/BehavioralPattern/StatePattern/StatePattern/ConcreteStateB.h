#ifndef _HEADER_ConcreteStateB_
#define _HEADER_ConcreteStateB_
#include "State.h"
class ConcreteStateB : public State
{
public:
	static State * Instance(); 
	
	virtual	~ConcreteStateB();
	virtual void handle(Context * c);
private:
	ConcreteStateB();
	static State * m_pState;
};


#endif // !_HEADER_ConcreteStateB_

