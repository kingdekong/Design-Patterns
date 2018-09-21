#ifndef _HEADER_ConcreteMediator_
#define _HEADER_ConcreteMediator_

#include "ConcreteColleagueB.h"
#include "Mediator.h"
#include "ConcreteColleagueA.h"
#include <map>
using namespace std;

class ConcreteMediator :public Mediator
{
public:
	ConcreteMediator();
	virtual ~ConcreteMediator();
	virtual void operation(int nWho, string str);
	virtual void registered(int nWho, Colleague * aColleague);
private:
	map<int, Colleague*> m_mpColleague;
};

#endif // !_HEADER_ConcreteMediator_

