#ifndef _HEADER_Context_
#define _HEADER_Context_

#include "State.h"
class Context
{
public:
	Context();
	virtual	~Context();

	void changeState(State* st);
	void request();

private:
	State* m_pState;
};

#endif // !_HEADER_Context_

