#pragma once
#include <string>

class TextInput
{
public:
	TextInput();

	std::string GetInput(const char* message);
};