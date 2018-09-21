#ifndef _HEADER_Librarian_
#define _HEADER_Librarian_
#include <string>

class BookComponent;

class Librarian
{
public:
	Librarian();
	virtual ~Librarian();

	void DisplayBookCollection();

private:
	void BuildBookCollection();
	BookComponent * BuildFictionGroup();
	BookComponent * BuildNonfictionGroup();

	BookComponent * BuildKidsGroup();
	BookComponent * BuildKidsAges3To5Group();
	BookComponent * BuildBiographyGroup();

	void AddBookToGroup(BookComponent * group, std::string bookTitle, std::string author);

	BookComponent * m_pBookCollection;

};

#endif // !_HEADER_Librarian_
