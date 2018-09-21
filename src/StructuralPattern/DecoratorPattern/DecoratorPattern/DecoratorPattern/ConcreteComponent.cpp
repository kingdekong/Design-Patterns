#include "ConcreteComponent.h"
#include <iostream>
using namespace std;

ConcreteComponent::ConcreteComponent()
{

}

ConcreteComponent::~ConcreteComponent()
{

}

void ConcreteComponent::operation()
{
	cout << "ConcreteComponent's normal operation!" << endl;
}