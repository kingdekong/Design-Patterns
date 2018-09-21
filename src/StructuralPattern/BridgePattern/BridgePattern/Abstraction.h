#ifndef _HEADER_Abstraction_
#define _HEADER_Abstraction_
#include "Implementor.h"

class Abstraction
{
public:
	Abstraction();
	Abstraction(Implementor* imp);

	virtual	~Abstraction();

	virtual void operation();

protected:
	Implementor * m_pImp;
};

#endif // !_HEADER_Abstraction_

