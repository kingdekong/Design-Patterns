#include "Target.h"
#include <iostream>
using namespace std;
Target::Target()
{
}

Target::~Target()
{
}

void Target::request()
{
	cout << "this is original request " << endl;
}
