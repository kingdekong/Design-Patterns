#ifndef _HEADER_ConcreteDecoratorA_
#define _HEADER_ConcreteDecoratorA_

#include "Decorator.h"
#include "Component.h"

class ConcreteDecoratorA : public Decorator
{

public:
	ConcreteDecoratorA(Component* pcmp);
	virtual ~ConcreteDecoratorA();

	void addBehavior();
	virtual void operation();

};
#endif // !_HEADER_ConcreteDecoratorA_

