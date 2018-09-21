#include <iostream>
#include "Singleton.h"
using namespace std;

int main()
{
	Singleton * sg = Singleton::getInstance();
	sg->singletonOperation();

	system("pause");

	return 0;
}