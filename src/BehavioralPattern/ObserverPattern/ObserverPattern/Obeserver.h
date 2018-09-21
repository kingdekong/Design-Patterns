#ifndef _HEADER_Obeserver_
#define _HEADER_Obeserver_
class Subject;

class Obeserver
{
public:
	Obeserver();
	virtual	~Obeserver();
	virtual void update(Subject * sub) = 0;
private:

};

#endif // !_HEADER_Obeserver_

