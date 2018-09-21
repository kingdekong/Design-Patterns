#include "ConcreteColleagueB.h"
#include <iostream>
using namespace std;
ConcreteColleagueB::ConcreteColleagueB()
{
}

ConcreteColleagueB::~ConcreteColleagueB()
{
}

void ConcreteColleagueB::sendMsg(int toWho, string str)
{
	cout << "send msg from colleagueB,to:" << toWho << endl;
	m_pMediator->operation(toWho, str);
}

void ConcreteColleagueB::receiveMsg(string str)
{
	cout << "ConcreteColleagueB reveivemsg:" << str << endl;
}
