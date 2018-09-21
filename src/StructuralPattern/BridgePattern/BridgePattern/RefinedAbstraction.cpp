#include "RefinedAbstraction.h"
#include <iostream>
using namespace std;
RefinedAbstraction::RefinedAbstraction()
{
}

RefinedAbstraction::RefinedAbstraction(Implementor * imp) :Abstraction(imp)
{
}

RefinedAbstraction::~RefinedAbstraction()
{
}

void RefinedAbstraction::operation()
{
	cout << "do something else ,and then " << endl;
	m_pImp->operationImp();
}
