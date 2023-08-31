#include <iostream>
#include <string>
#include <vector>

#pragma once
class Menu
{
private:
	std::vector<std::string> m_Items{};
	std::string m_Title{};
	int m_nPages;
public:
	
public:
	Menu();
	Menu(std::vector<std::string>& items);
	Menu(std::vector<std::string>& items, std::string title);
	std::string DisplayMenu(int page = 0);
	//virtual std::string GetSelection();
};