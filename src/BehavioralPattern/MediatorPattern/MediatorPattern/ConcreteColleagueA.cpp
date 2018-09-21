#include "ConcreteColleagueA.h"
#include <iostream>
using namespace std;

ConcreteColleagueA::ConcreteColleagueA()
{
}

ConcreteColleagueA::~ConcreteColleagueA()
{
}

void ConcreteColleagueA::sendMsg(int toWho, string str)
{
	cout << "send msg from colleagueA,to:" << toWho << endl;
	m_pMediator->operation(toWho, str);
}

void ConcreteColleagueA::receiveMsg(string str)
{
	cout << "ConcreteColleagueA reveivemsg:" << str << endl;
}
