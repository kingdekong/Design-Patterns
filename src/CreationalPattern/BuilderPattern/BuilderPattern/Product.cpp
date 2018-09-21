#include "Product.h"
#include <iostream>
#include <string>
using namespace std;

Product::Product()
{
}

Product::~Product()
{
}

void Product::setA(string str)
{
	m_a = str;
}

void Product::setB(string str)
{
	m_b = str;
}

void Product::setC(string str)
{
	m_c = str;
}

void Product::show()
{
	cout << "product has: " << endl << m_a << endl << m_b << endl << m_c << endl;
}
