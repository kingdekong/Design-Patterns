#include <iostream>
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

using namespace std;
int main()
{
	char a = '0';
	if ('0' == a)
	{
		cout << "yes" << endl;
	}
	else
	{
		cout << "no" << endl;
	}
	Context* c = new Context();
	c->request();
	c->request();
	c->request();

	system("pause");
	return 0;
}