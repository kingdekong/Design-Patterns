#include <iostream>
#include "../head/Factory.h"
#include "../head/Product.h"

using namespace std;

int main(int argc, char *argv[])
{
	Product * prod = Factory::createProduct("A");
	prod->Use();

	delete prod;


	//shared_ptr <Product>  prod(Factory::createProduct("A"));

	//prod->Use();
	system("pause");
	return 0;
}
