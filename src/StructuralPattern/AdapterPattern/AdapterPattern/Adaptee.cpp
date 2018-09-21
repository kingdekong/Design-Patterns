#include "Adaptee.h"
#include <iostream>
using namespace std;
Adaptee::Adaptee()
{
}

Adaptee::~Adaptee()
{
}

void Adaptee::specificRequest()
{
	cout << "specificRequest()|this is real Request from Adaptee!" << endl;
}
