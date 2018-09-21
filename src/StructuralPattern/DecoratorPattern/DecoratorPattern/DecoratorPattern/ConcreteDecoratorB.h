#ifndef _HEADER_ConcreteDecoratorB_
#define _HEADER_ConcreteDecoratorB_

#include "Decorator.h"
#include "Component.h"

class ConcreteDecoratorB : public Decorator
{
public:
	ConcreteDecoratorB(Component* pcmp);
	virtual ~ConcreteDecoratorB();

	void addBehavior();
	virtual void operation();

};
#endif // !_HEADER_ConcreteDecoratorB_

