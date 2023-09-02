#include "Character.h"
#include "Menu.h"

int main()
{
	Character character;
	character.SetStat(Character::INT, 16);
	character.PrintCharacter();

	std::vector<std::string> races
	{ 
		"Dwarf",
		"Elf",
		"Human",
		"Half-Elf",
		"Gnome",
		"Dragonborn",
		"Halfling",
		"Half-Orc",
		"Tiefling"
	};

	std::vector<std::string> clases
	{
		"Fighter",
		"Bard",
		"Barbarian"
	};

	std::string name;

	std::cout << "Name:" << std::endl;

	std::cin >> name;

	character.SetName(name);

	Menu raceMenu = Menu(races, "Choose a race:\n");
	
	character.SetRace(raceMenu.DisplayMenu());
	
	Menu clasMenu = Menu(clases, "Choose a class:\n");

	character.SetClas(clasMenu.DisplayMenu());
	character.PrintCharacter();
}