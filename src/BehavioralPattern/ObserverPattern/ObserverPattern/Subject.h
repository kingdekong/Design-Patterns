#ifndef _HEADER_Subject_
#define _HEADER_Subject_

#include "Obeserver.h"
#include <vector>
using namespace std;

class Subject
{
public:
	Subject();
	virtual	~Subject();

	Obeserver* m_Obeserver;

	void attach(Obeserver* pObeserver);
	void detach(Obeserver* pObeserver);
	void notify();

	virtual int getState() = 0;
	virtual void setState(int i) = 0;

private:
	vector< Obeserver*> m_vtObj;
};

#endif // !_HEADER_Subject_

