#ifndef _HEADER_Product_
#define _HEADER_Product_
class Product
{
public:
	Product();
	virtual ~Product();
	virtual void Use() = 0;
};

#endif // !_HEADER_Product_

