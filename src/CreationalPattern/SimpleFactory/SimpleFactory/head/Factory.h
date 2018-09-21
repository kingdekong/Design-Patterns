#ifndef _HEADER_Factory_
#define _HEADER_Factory_

#include "../head/Product.h"
#include <string>
using namespace std;

class Factory
{
public:
	Factory();
	virtual	~Factory();
	static Product* createProduct(string proname);
private:

};

#endif // !_HEADER_Factory_
