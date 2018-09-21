#ifndef _HEADER_Facade_
#define _HEADER_Facade_

#include "SystemA.h"
#include "SystemB.h"
#include "SystemC.h"

class Facade
{
public:
	Facade();
	virtual	~Facade();
	void wrapOpration();
private:
	SystemA * m_SystemA;
	SystemB * m_SystemB;
	SystemC * m_SystemC;
};

#endif // !_HEADER_Facade_

