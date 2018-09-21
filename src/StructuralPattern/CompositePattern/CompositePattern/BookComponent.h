#ifndef _HEADER_BookComponent_
#define _HEADER_BookComponent_
class BookComponent
{
public:
	BookComponent();
	virtual	~BookComponent();
	virtual void Add(BookComponent * newComponent);
	virtual void Remove(BookComponent * newComponent);
	virtual void DisplayInfo() = 0;
private:

};
 
#endif // !_HEADER_BookComponent_

