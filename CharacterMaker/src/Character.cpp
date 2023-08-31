#include "Character.h"
#include <iostream>

Character::Character()
{
	for (int i = 0; i < 6; ++i)
	{
		stats[i] = 10;
	}
}

void Character::SetStat(Stat stat, int val)
{
	stats[(int)stat] = val;
}

int Character::GetStat(Stat stat)
{
	return stats[int(stat)];
}

void Character::PrintCharacter()
{
	std::cout << "Name  :  " << m_Name << std::endl;
	std::cout << "Race  :  " << m_Race << std::endl;
	std::cout << "Class :  " << m_Clas << std::endl;
	std::cout << "------ STATS -------" << std::endl;
	std::cout << "STR: " << stats[STR] << std::endl
		<< "DEX: " << stats[DEX] << std::endl
		<< "CON: " << stats[CON] << std::endl
		<< "WIS: " << stats[WIS] << std::endl
		<< "CHA: " << stats[CHA] << std::endl
		<< "INT: " << stats[INT] << std::endl;
}

void Character::SetRace(std::string race) 
{
	m_Race = race;
}