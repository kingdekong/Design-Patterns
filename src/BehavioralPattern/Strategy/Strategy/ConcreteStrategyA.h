#ifndef ConcreteStrategyA_H_
#define ConcreteStrategyA_H_

#include "Strategy.h"
#include <iostream>
class ConcreteStrategyA :public Strategy
{
public:
	ConcreteStrategyA();
	virtual ~ConcreteStrategyA();
	virtual void algorithm();

private:

};

#endif

