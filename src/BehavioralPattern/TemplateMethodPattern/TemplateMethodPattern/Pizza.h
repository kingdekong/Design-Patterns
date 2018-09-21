#ifndef _HEADER_Pizza_
#define _HEADER_Pizza_
#include <string>

class Pizza
{
public:
	Pizza(std::string description);
	virtual ~Pizza();

	void Prepare();
protected:
	virtual void PrepareDough();
	virtual void AddSauce();
	virtual void AddToppings() = 0;
	virtual void Bake();
private:
	std::string m_description;
};


#endif // !_HEADER_Pizza_
