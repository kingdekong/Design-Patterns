#ifndef _HEADER_Decorator_

#define _HEADER_Decorator_

#include "Component.h"

class Decorator : public Component
{

public:
	Decorator(Component* pcmp);
	virtual ~Decorator();

	void operation();

private:
	Component * m_pComponent;

};
#endif // !_HEADER_Decorator_

