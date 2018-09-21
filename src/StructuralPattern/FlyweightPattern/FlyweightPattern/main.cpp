#include <iostream>
#include "ConcreteFlyweight.h"
#include "FlyweightFactory.h"
#include "Flyweight.h"
using namespace std;

int main()
{
	FlyweightFactory factory;
	Flyweight* fw = factory.getFlyWeight("one");
	fw->operation();

	Flyweight* fw2 = factory.getFlyWeight("two");
	fw2->operation();

	Flyweight* fw3 = factory.getFlyWeight("one");
	fw3->operation();

	system("pause");
	return 0;
}