#include "BookGroup.h"
#include <iostream>
BookGroup::BookGroup(std::string groupName)
	: m_groupName(groupName) {
}


BookGroup::~BookGroup()
{

}

void BookGroup::Add(BookComponent * newComponent)
{
	m_bookComponents.push_back(newComponent);
}

void BookGroup::Remove(BookComponent * componentToRemove)
{
	std::vector<BookComponent*>::iterator pos;
	for (pos = m_bookComponents.begin();
		pos != m_bookComponents.end();
		++pos)
	{
		if (*pos == componentToRemove)
		{
			m_bookComponents.erase(pos);
			break;
		}
	}
}

void BookGroup::DisplayInfo()
{
	static std::string spaces;
	std::cout << "Group : " << m_groupName << "\n";
	spaces += std::string("    ");

	std::vector<BookComponent *>::iterator pos;
	for (pos = m_bookComponents.begin();
		pos != m_bookComponents.end(); ++pos)
	{
		std::cout << spaces;

		BookComponent * bookComponent = *pos;

		bookComponent->DisplayInfo();
	}

	spaces.pop_back();
	spaces.pop_back();
	spaces.pop_back();
	spaces.pop_back();
}
