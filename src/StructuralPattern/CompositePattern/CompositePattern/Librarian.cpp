#include "Librarian.h"
#include "BookComponent.h"
#include "BookGroup.h"
#include "Book.h"

Librarian::Librarian() : m_pBookCollection(new BookGroup(std::string("Book Collection")))
{
	BuildBookCollection();
}

Librarian::~Librarian()
{
	delete m_pBookCollection;
}

void Librarian::BuildBookCollection()
{
	AddBookToGroup(m_pBookCollection,
		std::string("Merriam-Webster's Collegiate Dictionary"),
		std::string("Merriam-Webster"));

	m_pBookCollection->Add(BuildFictionGroup());
	m_pBookCollection->Add(BuildNonfictionGroup());

}

BookComponent * Librarian::BuildFictionGroup()
{
	BookComponent * fictionGroup = new BookGroup(std::string("Fiction"));

	fictionGroup->Add(BuildKidsGroup());

	return fictionGroup;
}

BookComponent * Librarian::BuildNonfictionGroup()
{
	BookComponent * nonfictionGroup = new BookGroup(std::string("Nonfiction"));

	nonfictionGroup->Add(BuildBiographyGroup());

	return nonfictionGroup;
}

BookComponent * Librarian::BuildKidsGroup()
{
	BookComponent * kidsGroup =
		new BookGroup(std::string("Kids"));

	AddBookToGroup(kidsGroup,
		std::string("Green Eggs and Ham"),
		std::string("Dr. Suess"));

	kidsGroup->Add(BuildKidsAges3To5Group());

	return kidsGroup;
}

BookComponent * Librarian::BuildKidsAges3To5Group()
{
	BookComponent * kidsAges3To5Group =
		new BookGroup(std::string("Kids (Ages 3-5)"));

	AddBookToGroup(kidsAges3To5Group,
		std::string("Goodnight Moon"),
		std::string("Margaret Wise Brown"));

	return kidsAges3To5Group;
}

BookComponent * Librarian::BuildBiographyGroup()
{
	BookComponent * biographyGroup = new BookGroup(std::string("Biography"));

	AddBookToGroup(biographyGroup,
		std::string("Steve Jobs"),
		std::string("Walter Isaacson"));

	return biographyGroup;
}

void Librarian::AddBookToGroup(BookComponent * group,
	std::string bookTitle, std::string author)
{
	BookComponent * book = new Book(bookTitle, author);
	group->Add(book);
}

void Librarian::DisplayBookCollection()
{
	m_pBookCollection->DisplayInfo();
}
