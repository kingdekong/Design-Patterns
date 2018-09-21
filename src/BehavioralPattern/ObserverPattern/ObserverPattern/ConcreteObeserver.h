#ifndef _HEADER_ConcreteObeserver_
#define _HEADER_ConcreteObeserver_
#include "Obeserver.h"
#include <string>
using namespace std;

class ConcreteObeserver :public Obeserver
{
public:
	ConcreteObeserver(string name);
	virtual	~ConcreteObeserver();

	virtual void update(Subject* sub);

private:
	string m_objName;
	int m_obeserverState;
};

#endif // !_HEADER_ConcreteObeserver_

