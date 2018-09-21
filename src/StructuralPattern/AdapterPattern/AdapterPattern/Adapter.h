#ifndef _HEADER_Adapter_
#define _HEADER_Adapter_

#include "Adaptee.h"
#include "Target.h"

class Adapter :public Target
{
public:
	Adapter(Adaptee* adaptee);
	virtual	~Adapter();

	virtual void request();

private:
	Adaptee * m_pAdaptee;
};

#endif // !_HEADER_Adapter_

