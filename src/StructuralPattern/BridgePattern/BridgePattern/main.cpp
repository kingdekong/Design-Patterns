#include <iostream>
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "RefinedAbstraction.h"
#include "Abstraction.h"

using namespace std;

int main()
{
	Implementor* pImpA = new ConcreteImplementorA();
	Abstraction* pa = new RefinedAbstraction(pImpA);
	pa->operation();

	Implementor* pImpB = new   ConcreteImplementorB();
	Abstraction* pb = new RefinedAbstraction(pImpB);
	pb->operation();

	delete pa;
	delete pb;

	system("pause");
	return 0;
}