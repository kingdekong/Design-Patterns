#include <iostream>
#include "ConcreteCommand.h"
#include "Invoker.h"
#include "Receiver.h"

using namespace std;
int main()
{
	Receiver* pReceiver = new Receiver();
	ConcreteCommand* pConcreteCommand = new ConcreteCommand(pReceiver);
	Invoker* pInvoker = new Invoker(pConcreteCommand);

	pInvoker->call();

	delete pReceiver;
	delete pConcreteCommand;
	delete pInvoker;

	system("pause");
	return 0;
}