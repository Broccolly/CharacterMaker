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
		"Tiefling",
	};
	Menu menu = Menu(races, "Choose a race:\n");
	character.SetRace(menu.DisplayMenu());
	character.PrintCharacter();
}