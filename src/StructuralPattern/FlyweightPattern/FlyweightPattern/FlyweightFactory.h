#ifndef _HEADER_FlyweightFactory_
#define _HEADER_FlyweightFactory_
#include "Flyweight.h"
#include <map>
#include <string>
using namespace std;

class FlyweightFactory
{
public:
	FlyweightFactory();
	virtual	~FlyweightFactory();

	Flyweight* getFlyWeight(string str);
private:
	map<string, Flyweight*> m_mpFlyweight;
};

#endif // !_HEADER_FlyweightFactory_

