#ifndef _HEADER_RealSubject_
#define _HEADER_RealSubject_
#include "Subject.h"

class RealSubject :public Subject
{
public:
	RealSubject();
	virtual	~RealSubject();
	void request();
private:

};

#endif // !_HEADER_RealSubject_

