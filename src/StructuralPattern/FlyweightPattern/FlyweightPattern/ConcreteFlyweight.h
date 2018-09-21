#ifndef _HEADER_ConcreteFlyweight_
#define _HEADER_ConcreteFlyweight_
#include <string>
#include "Flyweight.h"
using namespace std;

class ConcreteFlyweight :public Flyweight
{
public:
	ConcreteFlyweight(string str);
	virtual	~ConcreteFlyweight();

	virtual void operation();

private:
	string  intrinsicState;
};

#endif // !_HEADER_ConcreteFlyweight_
