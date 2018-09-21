#ifndef _HEADER_ConcreteStateA_
#define _HEADER_ConcreteStateA_
#include "State.h"
class ConcreteStateA :public State
{
public:
	virtual	~ConcreteStateA();

	static State* Instance();
	virtual void handle(Context* c);

private:
	ConcreteStateA();
	static State* m_pState;
};

#endif // !_HEADER_ConcreteStateA_

