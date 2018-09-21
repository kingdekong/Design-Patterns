#include "Factory.h"
#include "Product.h"
#include "ConcreteFactory.h"
#include <iostream>
using namespace std;
int main()
{
	Factory *fc = new ConcreteFactory();
	Product * prod = fc->factoryMethod();

	prod->use();
	delete fc;
	delete prod;

	system("pause");
	return 0;
}