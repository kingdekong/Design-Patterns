#include "ConcreteImplementorA.h"
#include <iostream>
using namespace std;

ConcreteImplementorA::ConcreteImplementorA()
{
}

ConcreteImplementorA::~ConcreteImplementorA()
{
}

void ConcreteImplementorA::operationImp()
{
	cout << "imp in ConcreteImplementorA style." << endl;
}
