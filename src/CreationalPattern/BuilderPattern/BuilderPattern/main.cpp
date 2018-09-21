#include <iostream>
#include "ConcreteBuilder.h"
#include "Director.h"
#include "Product.h"
#include "Builder.h"

using namespace std;
int main()
{
	ConcreteBuilder * builder = new ConcreteBuilder();
	Director director;

	director.setBuilder(builder);
	Product* pd = director.construct();

	pd->show();

	delete builder;
	delete pd;
	
	system("pause");
	return 0;
}