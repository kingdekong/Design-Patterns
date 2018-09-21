#ifndef _HEADER_RefinedAbstraction_
#define _HEADER_RefinedAbstraction_
#include "Abstraction.h"

class RefinedAbstraction :public Abstraction
{
public:
	RefinedAbstraction();
	RefinedAbstraction(Implementor* imp);

	virtual	~RefinedAbstraction();

	virtual void operation();

private:

};

#endif // !_HEADER_RefinedAbstraction_

