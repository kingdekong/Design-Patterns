#ifndef _HEADER_UnsharedConcreteFlyweight_
#define _HEADER_UnsharedConcreteFlyweight_
class UnsharedConcreteFlyweight
{
public:
	UnsharedConcreteFlyweight();
	virtual	~UnsharedConcreteFlyweight();

	void operation();

private:
	int allState;
};

#endif // !_HEADER_UnsharedConcreteFlyweight_
