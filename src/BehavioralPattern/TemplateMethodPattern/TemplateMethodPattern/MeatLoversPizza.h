#ifndef _HEADER_MeatLoversPizza_
#define _HEADER_MeatLoversPizza_
#include "Pizza.h"
class MeatLoversPizza :public Pizza
{
public:
	MeatLoversPizza();
	virtual ~MeatLoversPizza();

private:
	virtual void AddToppings();
};


#endif // !_HEADER_MeatLoversPizza_

