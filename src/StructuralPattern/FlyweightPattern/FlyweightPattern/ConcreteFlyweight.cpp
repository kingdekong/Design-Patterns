#include "ConcreteFlyweight.h"
#include <iostream>
using namespace std;

ConcreteFlyweight::ConcreteFlyweight(string str)
{
	intrinsicState = str;
}

ConcreteFlyweight::~ConcreteFlyweight()
{
}

void ConcreteFlyweight::operation()
{
	cout << "Flyweight[" << intrinsicState << "] do operation." << endl;
}
