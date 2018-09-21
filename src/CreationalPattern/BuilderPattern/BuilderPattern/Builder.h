#ifndef _HEADER_Builder_
#define _HEADER_Builder_
#include "Product.h"
class Builder
{
public:
	Builder();
	virtual ~Builder();

	virtual void buildPartA();
	virtual void buildPartB();
	virtual void buildPartC();
	virtual Product* getProductResult();

protected:
	Product * m_prod;
};

#endif // !_HEADER_Builder_

