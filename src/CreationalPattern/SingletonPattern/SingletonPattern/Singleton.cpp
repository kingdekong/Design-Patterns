#include "Singleton.h"
#include <iostream>
using namespace std;
Singleton* Singleton::instance = nullptr;

Singleton::Singleton()
{
	
}

Singleton::~Singleton()
{
	delete instance;
}

Singleton * Singleton::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Singleton();
	}
	return instance;
}

void Singleton::singletonOperation()
{
	cout << " + singletonOperation + " << endl;
}
