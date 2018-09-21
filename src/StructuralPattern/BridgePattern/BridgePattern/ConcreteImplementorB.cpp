#include "ConcreteImplementorB.h"
#include <iostream>
using namespace std;
ConcreteImplementorB::ConcreteImplementorB()
{
}

ConcreteImplementorB::~ConcreteImplementorB()
{
}

void ConcreteImplementorB::operationImp()
{
	cout << "imp in ConcreteImplementorB style." << endl;
}
