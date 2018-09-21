#ifndef ConcreteStrategyB_H_
#define ConcreteStrategyB_H_

#include "Strategy.h"
#include <iostream>

class ConcreteStrategyB :public Strategy
{
public:
	ConcreteStrategyB();
	virtual ~ConcreteStrategyB();
	virtual void algorithm();

private:

};

#endif
