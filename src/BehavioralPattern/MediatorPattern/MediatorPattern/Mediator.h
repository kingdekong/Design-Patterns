#ifndef _HEADER_Mediator_
#define _HEADER_Mediator_

#include <string>

using namespace std;
// ע�������������໥���ã� ���ﲻ��ֱ��#include  Colleagueͷ�ļ�,��ʹ�������� 
class Colleague;

class Mediator
{
public:
	Mediator();
	virtual	~Mediator();

	virtual void operation(int nWho, string str);
	virtual void registered(int nWho, Colleague* aColleague);

private:

};

#endif // !_HEADER_Mediator_

