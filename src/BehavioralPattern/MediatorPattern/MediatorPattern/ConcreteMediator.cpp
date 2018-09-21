#include "ConcreteMediator.h"
#include <map>
#include <iostream>
using namespace std;

ConcreteMediator::ConcreteMediator()
{
}

ConcreteMediator::~ConcreteMediator()
{
}

void ConcreteMediator::operation(int nWho, string str)
{
	map<int, Colleague*>::const_iterator itr = m_mpColleague.find(nWho);
	if (itr == m_mpColleague.end())
	{
		cout << "not found this colleague!" << endl;
		return;
	}
	Colleague* pc = itr->second;
	pc->receiveMsg(str);
}

void ConcreteMediator::registered(int nWho, Colleague * aColleague)
{
	map<int, Colleague*>::const_iterator itr = m_mpColleague.find(nWho);
	if (itr == m_mpColleague.end())
	{
		m_mpColleague.insert(make_pair(nWho, aColleague));
		//ͬʱ���н��౩¶��colleague 
		cout << "���ԣ� " << this << endl;
		aColleague->setMediator(this);
	}
}
