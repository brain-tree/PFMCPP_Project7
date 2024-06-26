#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf ( std::string name_, int hitPoints_, int armor_ ) : 
Character(hitPoints_, armor_, 4), 
name(name_) 
{
    // int randomNumber = (rand() % 4);
    // helpfulItems = makeHelpfulItems(randomNumber);

    // randomNumber = (rand() % 4);
    // defensiveItems = makeDefensiveItems(randomNumber);

    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(5);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}
