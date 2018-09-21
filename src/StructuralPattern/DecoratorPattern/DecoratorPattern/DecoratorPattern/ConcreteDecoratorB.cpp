#include "ConcreteDecoratorB.h"
#include <iostream>
using namespace std;

ConcreteDecoratorB::ConcreteDecoratorB(Component* pcmp)
:Decorator(pcmp)
{

}

ConcreteDecoratorB::~ConcreteDecoratorB(){

}

void ConcreteDecoratorB::addBehavior(){
	cout << "addBehavior BBBB" << endl;
}

void ConcreteDecoratorB::operation(){
	Decorator::operation();
	addBehavior();
}