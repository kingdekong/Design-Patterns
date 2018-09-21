#ifndef _HEADER_ConcreteCommand_
#define _HEADER_ConcreteCommand_
#include "Command.h"
#include "Receiver.h"
class ConcreteCommand :public Command
{
public:
	ConcreteCommand(Receiver* pReceriver);
	virtual	~ConcreteCommand();
	virtual void execute();

private:
	Receiver* m_pReciver;
};

#endif // !_HEADER_ConcreteCommand_
