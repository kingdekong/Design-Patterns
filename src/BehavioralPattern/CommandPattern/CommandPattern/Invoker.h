#ifndef _HEADER_Invoker_
#define _HEADER_Invoker_
#include "Command.h"

class Invoker
{
public:
	Invoker(Command* pCommand);
	virtual	~Invoker();
	void call();
private:
	Command* m_pCommand;
};

#endif // !_HEADER_Invoker_

