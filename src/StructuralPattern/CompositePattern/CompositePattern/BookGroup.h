#ifndef _HEADER_BookGroup_
#define _HEADER_BookGroup_
#include "BookComponent.h"

#include <string>
#include <vector>
class BookGroup : public BookComponent
{
public:
	BookGroup(std::string groupName);
	virtual	~BookGroup();

	virtual void Add(BookComponent * newComponent);
	virtual void Remove(BookComponent * componentToRemove);
	virtual void DisplayInfo();
private:
	std::string m_groupName;
	std::vector<BookComponent*> m_bookComponents;
};

#endif // !_HEADER_BookGroup_

