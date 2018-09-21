#ifndef _HEADER_Singleton_
#define _HEADER_Singleton_

class Singleton
{
public:
	virtual	~Singleton();

	static Singleton* getInstance();
	void singletonOperation();

private:
	static Singleton* instance;
	Singleton();
};

#endif // !_HEADER_Singleton_
