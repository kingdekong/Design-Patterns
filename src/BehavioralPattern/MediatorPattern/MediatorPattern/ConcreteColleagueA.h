#ifndef _HEADER_ConcreteColleagueA_
#define _HEADER_ConcreteColleagueA_

#include "Colleague.h"

class ConcreteColleagueA :public Colleague
{
public:
	ConcreteColleagueA();
	virtual	~ConcreteColleagueA();

	virtual void sendMsg(int toWho, string str);
	virtual void receiveMsg(string str);

private:

};

#endif // !_HEADER_ConcreteColleagueA_

