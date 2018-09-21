#ifndef _HEADER_Product_
#define _HEADER_Product_
#include <iostream>
using namespace std;

class Product
{
public:
	Product();
	~Product();
	void setA(string str);
	void setB(string str);
	void setC(string str);
	void show();
private:
	string m_a;
	string m_b;
	string m_c;
};

#endif // !_HEADER_Product_

