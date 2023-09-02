#include "TextInput.h"
#include <iostream>
#include <string>

TextInput::TextInput()
{

}

std::string TextInput::GetInput(const char* message)
{
	std::string out;
	std::cout << message << std::endl;
	std::cin >> out;
	return out;
}