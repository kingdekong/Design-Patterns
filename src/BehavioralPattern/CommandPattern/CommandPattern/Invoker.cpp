#include "Invoker.h"
#include <iostream>
using namespace std;

Invoker::Invoker(Command * pCommand)
{
	m_pCommand = pCommand;
}

Invoker::~Invoker()
{
}

void Invoker::call()
{
	cout << "Invoker call." << endl;
	m_pCommand->execute();
}
