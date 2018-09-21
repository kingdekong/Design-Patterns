#include <iostream>
#include "RealSubject.h"
#include "Proxy.h"

using namespace std;

int main()
{
	Proxy proxy;

	proxy.request();

	system("pause");
	return 0;
}