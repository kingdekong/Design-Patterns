#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;
FlyweightFactory::FlyweightFactory()
{
}

FlyweightFactory::~FlyweightFactory()
{
}

Flyweight* FlyweightFactory::getFlyWeight(string str)
{
	map<string, Flyweight*>::iterator itr = m_mpFlyweight.find(str);
	if (itr == m_mpFlyweight.end())
	{
		Flyweight* fw = new ConcreteFlyweight(str);
		m_mpFlyweight.insert(make_pair(str, fw));

		return fw;
	}
	else
	{
		cout << "aready in the pool,use the exist one:" << endl;
		return itr->second;
	}
}
