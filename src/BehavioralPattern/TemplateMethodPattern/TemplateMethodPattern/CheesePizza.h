#ifndef _HEADER_CheesePizza_
#define _HEADER_CheesePizza_
#include "Pizza.h"

class CheesePizza : public Pizza
{
public:
	CheesePizza();
	virtual	~CheesePizza();

private:
	virtual void AddToppings();
};

 
#endif // !_HEADER_CheesePizza_

