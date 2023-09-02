#include <string>
#include <iostream>
#pragma once
class Character
{
public:
	enum Stat { STR, DEX, CON, WIS, INT, CHA };
private:
	int stats[6];
	std::string m_Name;
	std::string m_Race;
	std::string m_Clas;

public:
	Character();
	void SetStat(Stat stat, int val);
	int GetStat(Stat stat);
	std::string& GetName();
	void SetName(const std::string& name);
	std::string& GetClas();
	void SetClas(const std::string& clas);
	std::string& GetRace();
	void SetRace(const std::string& race);

	void PrintCharacter();
};