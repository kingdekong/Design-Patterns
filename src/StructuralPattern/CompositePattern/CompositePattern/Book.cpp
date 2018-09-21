#include "Book.h"
#include <iostream>

Book::Book(std::string bookTitle, std::string author) : m_title(bookTitle), m_author(author)
{
}

Book::~Book()
{
}

void Book::DisplayInfo()
{
	std::cout << "Book  : " << m_title << " by " << m_author << "\n";
}
