#ifndef _HEADER_Book_
#define _HEADER_Book_
#include "BookComponent.h"
#include <string>

class Book :public BookComponent
{
public:
	Book(std::string bookTitle, std::string author);
	 	virtual	~Book();
		virtual void DisplayInfo();
private:
	std::string m_title;
	std::string m_author;
};

 
#endif // !_HEADER_Book_

