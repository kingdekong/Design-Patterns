#include <iostream>
#include "Adapter.h"
#include "Adaptee.h"
#include "Target.h"
using namespace std;

int main()
{
	Adaptee* adaptee = new Adaptee();
	Target* tar = new Adapter(adaptee);
	tar->request();

	system("pause");
	return 0;
}