#ifndef _HEADER_Colleague_
#define _HEADER_Colleague_

#include "Mediator.h"
#include <string>
using namespace std;
class Colleague
{
public:
	Colleague();
	virtual	~Colleague();

	virtual void receiveMsg(string str);
	virtual void sendMsg(int toWho, string str);
	void setMediator(Mediator* aMediator);

protected:
	Mediator* m_pMediator;
};

#endif // !_HEADER_Colleague_

