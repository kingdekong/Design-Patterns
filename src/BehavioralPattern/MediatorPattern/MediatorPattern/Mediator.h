#ifndef _HEADER_Mediator_
#define _HEADER_Mediator_

#include <string>

using namespace std;
// 注：由于两个类相互引用， 这里不能直接#include  Colleague头文件,而使用声明； 
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

