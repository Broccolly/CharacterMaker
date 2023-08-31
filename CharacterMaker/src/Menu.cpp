#include "Menu.h"
#include <conio.h>
#include <vector>
#include<algorithm>

Menu::Menu() : m_Items{}
{
	m_nPages = 0;
}

Menu::Menu(std::vector<std::string>& items) : m_Items{ items }
{
	m_nPages = ((m_Items.size() - 1) / 8) + 1;
}

Menu::Menu(std::vector<std::string>& items, std::string title)
	: m_Items{ items }, m_Title{ title }
{
	m_nPages = ((m_Items.size() - 1) / 8) + 1;
}

std::string Menu::DisplayMenu(int page)
{
	while (true)
	{
		system("cls");
		std::cout << m_Title;
		for (int i = 0; i < std::min(8, (int)m_Items.size() - page * 8); ++i)
		{
			std::cout << "(" << i + 1 << ") " << m_Items[i + page * 8] << std::endl;
		}
		std::cout << "Page " << page + 1 << "/" << m_nPages;
		if (page < m_nPages - 1)
			std::cout << "    (0) Next page";
		if (page > 0)
			std::cout << "    (9) Prev page";
		std::cout << "    (B) Return";
		std::cout << std::endl;

		char input;
		if (std::cin >> input)
		{
			if (input == '0' && page < m_nPages - 1)
			{
				page++;
			}
			else if (input == '9' && page > 0)
			{
				page--;
			}
			else if (input == 'B')
			{
				return "";
			}
			else
			{
				int inputInt;
				inputInt = std::stoi(&input);
				return m_Items[inputInt + 8 * page];
			}
		}
	}
}