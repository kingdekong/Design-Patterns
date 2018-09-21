#ifndef _HEADER_ConcreteComponent_

#define _HEADER_ConcreteComponent_

#include "Component.h"

class ConcreteComponent : public Component
{
public:
	ConcreteComponent();
	virtual ~ConcreteComponent();

	void operation();

};
#endif // !_HEADER_ConcreteComponent_

