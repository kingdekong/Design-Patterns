#ifndef _HEADER_Director_
#define _HEADER_Director_
#include "Builder.h"

class Director
{
public:
	Director();
	virtual	~Director();

	Builder* m_Builder;

	Product* construct();
	void setBuilder(Builder* builder);

private:
	Builder * m_pBuilder;

};


#endif // !_HEADER_Director_

