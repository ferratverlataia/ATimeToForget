#include "Utilities.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>

void Utilities::PrintTextColor(std::string text, int color, int secondsperletter)
{
	std::string sentence = "";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

	for (std::string::iterator character = text.begin(); character != text.end(); ++character)
	{
		std::cout << *character;
		std::this_thread::sleep_for(std::chrono::milliseconds(secondsperletter));
	};
}

void Utilities::PrintTextColorNewLine(std::string text, int color, int secondsperletter)
{
	Utilities::PrintTextColor(text, color, secondsperletter);
	std::cout << std::endl;
}

void Utilities::NewLine()
{
	std::cout << std::endl;
}

void Utilities::WaitforInput()
{
	std::cin.get();
}

void Utilities::ClearScreen()
{
	system("cls");
}
