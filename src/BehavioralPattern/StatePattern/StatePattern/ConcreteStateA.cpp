#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>
using namespace std;

State * ConcreteStateA::m_pState = NULL;

ConcreteStateA::ConcreteStateA()
{

}
ConcreteStateA::~ConcreteStateA()
{
}

State * ConcreteStateA::Instance()
{
	if (nullptr == m_pState)
	{
		m_pState = new ConcreteStateA();
	}
	return m_pState;
}

void ConcreteStateA::handle(Context * c)
{
	cout << "doing something in State A.\n done,change state to B" << endl;
	c->changeState(ConcreteStateB::Instance());
}
