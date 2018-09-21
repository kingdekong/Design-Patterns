#include "ConcreteCommand.h"
#include <iostream>
using namespace std;

ConcreteCommand::ConcreteCommand(Receiver * pReceriver)
{
	m_pReciver = pReceriver;
}

ConcreteCommand::~ConcreteCommand()
{
}

void ConcreteCommand::execute()
{
	cout << "ConcreteCommand execute." << endl;
	m_pReciver->action();
}
