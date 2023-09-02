#include "Character.h"
#include "Menu.h"
#include "TextInput.h"
#include <string>
int main()
{
	Character character;
	character.SetStat(Character::INT, 16);
	character.PrintCharacter();
	TextInput textInput;

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

	character.SetName(textInput.GetInput("What is your name?"));

	Menu raceMenu = Menu(races, "Choose a race:\n");

	character.SetRace(raceMenu.DisplayMenu());

	Menu clasMenu = Menu(clases, "Choose a class:\n");

	character.SetClas(clasMenu.DisplayMenu());
	character.PrintCharacter();
}