#ifndef _HEADER_Proxy_
#define _HEADER_Proxy_

#include "RealSubject.h"
#include "Subject.h"

class Proxy :public Subject
{
public:
	Proxy();
	virtual	~Proxy();
	void request();
private:
	void afterRequest();
	void preRequest();
	RealSubject * m_pRealSubject;
};

#endif // !_HEADER_Proxy_
