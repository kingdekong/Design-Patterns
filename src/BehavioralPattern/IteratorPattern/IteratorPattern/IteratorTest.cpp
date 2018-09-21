/*
 * IteratorTest.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: Robert Larson
 */

#include "ArrayList.h"
#include "StdVectorList.h"
#include "Iterator.h"
#include "BaseballPlayer.h"

#include <iostream>
#include <string>

List<BaseballPlayer> * MakeNewYorkMetsLineup()
{
	List<BaseballPlayer> * newYorkMetsLineup = new StdVectorList<BaseballPlayer>();

	newYorkMetsLineup->Append(BaseballPlayer(std::string("Curtis Granderson"), std::string("CF"), 'L'));
	newYorkMetsLineup->Append(BaseballPlayer(std::string("Asdrubal Cabrera"), std::string("SS"), 'S'));
	newYorkMetsLineup->Append(BaseballPlayer(std::string("Yoenis Cespedes"), std::string("LF"), 'R'));
	newYorkMetsLineup->Append(BaseballPlayer(std::string("Jay Bruce"), std::string("RF"), 'L'));
	newYorkMetsLineup->Append(BaseballPlayer(std::string("Neil Walker"), std::string("2B"), 'S'));
	newYorkMetsLineup->Append(BaseballPlayer(std::string("Lucas Duda"), std::string("1B"), 'L'));
	newYorkMetsLineup->Append(BaseballPlayer(std::string("Travis d'Arnaud"), std::string("C"), 'R'));
	newYorkMetsLineup->Append(BaseballPlayer(std::string("Jose Reyes"), std::string("SS"), 'S'));
	newYorkMetsLineup->Append(BaseballPlayer(std::string("Noah Syndergaard"), std::string("P"), 'L'));

	return newYorkMetsLineup;
}

List<BaseballPlayer> * MakeWashingtonNationalsLineup()
{
	List<BaseballPlayer> * washingtonNationalsLineup = new ArrayList<BaseballPlayer>();

	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Adam Eaton"), std::string("CF"), 'L'));
	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Wilmer Difo"), std::string("SS"), 'R'));
	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Daniel Murphy"), std::string("2B"), 'L'));
	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Bryce Harper"), std::string("RF"), 'L'));
	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Ryan Zimmerman"), std::string("1B"), 'L'));
	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Anthony Rendon"), std::string("3B"), 'R'));
	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Matt Wieters"), std::string("C"), 'R'));
	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Michael Taylor"), std::string("CF"), 'R'));
	washingtonNationalsLineup->Append(BaseballPlayer(std::string("Stephen Strasburg"), std::string("P"), 'S'));

	return washingtonNationalsLineup;
}

void PrintLineup(std::string lineupName,
	Iterator<BaseballPlayer> * iterator)
{
	std::cout << lineupName << "\n";

	unsigned int lineupPosition = 1;

	for (iterator->First(); !iterator->IsDone(); iterator->Next())
	{
		std::cout << lineupPosition++ << ". " << iterator->CurrentItem() << "\n";
	}

	std::cout << "\n";
}

int main()
{
	List<BaseballPlayer>* newYorkMetsLineup = MakeNewYorkMetsLineup();
	Iterator<BaseballPlayer>* newYorkMetsLineupIterator = newYorkMetsLineup->CreateIterator();
	PrintLineup(std::string("New York Mets Lineup"), newYorkMetsLineupIterator);
	delete newYorkMetsLineupIterator;
	delete newYorkMetsLineup;

	List<BaseballPlayer>     * washingtonNationalsLineup = MakeWashingtonNationalsLineup();
	Iterator<BaseballPlayer> * washingtonNationalsLineupIterator = washingtonNationalsLineup->CreateIterator();
	PrintLineup(std::string("Washington Nationals Lineup"), washingtonNationalsLineupIterator);
	delete washingtonNationalsLineupIterator;
	delete washingtonNationalsLineup;

	system("pause");
	return 0;
}
