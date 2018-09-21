#ifndef _HEADER_ConcreteBuilder_
#define _HEADER_ConcreteBuilder_
#include "Builder.h"

class ConcreteBuilder :public Builder
{
public:
	ConcreteBuilder();
	virtual~ConcreteBuilder();

	virtual void buildPartA();
	virtual void buildPartB();
	virtual void buildPartC();

private:

};


#endif // !_HEADER_ConcreteBuilder_
