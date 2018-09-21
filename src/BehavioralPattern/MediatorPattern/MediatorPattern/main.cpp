#include <iostream>
#include "ConcreteColleagueA.h"
#include "ConcreteMediator.h"
#include "ConcreteColleagueB.h"

using namespace std;
int main()
{
	ConcreteColleagueA * pa = new ConcreteColleagueA();
	ConcreteColleagueB * pb = new ConcreteColleagueB();
	ConcreteMediator * pm = new ConcreteMediator();
	cout << "²âÊÔpm£º " << pm << endl;

	pm->registered(1, pa);
	pm->registered(2, pb);

	// sendmsg from a to b
	pa->sendMsg(2, "hello,i am a");
	// sendmsg from b to a
	pb->sendMsg(1, "hello,i am b");

	delete pa, pb, pm;


	system("pause");
	return 0;
}