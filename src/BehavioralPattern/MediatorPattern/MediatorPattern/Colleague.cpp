#include "Colleague.h"
#include "Mediator.h"
#include <iostream>
using namespace std;
Colleague::Colleague()
{
}

Colleague::~Colleague()
{
}

void Colleague::receiveMsg(string str)
{
	cout << "reveivemsg:" << str << endl;
}

void Colleague::sendMsg(int toWho, string str)
{
}

void Colleague::setMediator(Mediator * aMediator)
{
	m_pMediator = aMediator;
}
