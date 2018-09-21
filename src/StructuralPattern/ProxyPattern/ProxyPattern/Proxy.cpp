#include "Proxy.h"
#include <iostream>
using namespace std;

Proxy::Proxy()
{
	m_pRealSubject = new RealSubject();
}

Proxy::~Proxy()
{
	delete m_pRealSubject;
}

void Proxy::request()
{
	preRequest();
	m_pRealSubject->request();
	afterRequest();
}

void Proxy::afterRequest()
{
	cout << "Proxy::afterRequest" << endl;
}

void Proxy::preRequest()
{
	cout << "Proxy::preRequest" << endl;
}
