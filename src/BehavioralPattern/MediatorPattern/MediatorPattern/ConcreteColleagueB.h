#ifndef _HEADER_ConcreteColleagueB_
#define _HEADER_ConcreteColleagueB_

#include "Colleague.h"

class ConcreteColleagueB :public Colleague
{
public:
	ConcreteColleagueB();
	virtual	~ConcreteColleagueB();

	virtual void sendMsg(int toWho, string str);
	virtual void receiveMsg(string str);
private:

};
 
#endif // !_HEADER_ConcreteColleagueB_
