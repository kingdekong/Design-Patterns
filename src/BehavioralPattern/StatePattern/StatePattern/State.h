#ifndef _HEADER_State_
#define _HEADER_State_

class Context;

class State
{
public:
	State();
	virtual	~State();
	virtual void handle(Context* c);

private:

};

#endif // !_HEADER_State_

