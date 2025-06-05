#include "Utilities.h"
#include "DialogueDataBase.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <limits>


void Utilities::printTextColor(std::string text, int color, int secondsperletter)
{
	std::string sentence = "";

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

	for (std::string::iterator character = text.begin(); character != text.end(); ++character)
	{
		std::cout << *character;
		std::this_thread::sleep_for(std::chrono::milliseconds(secondsperletter));
	};
}

void Utilities::printTextColorNewLine(std::string text, int color, int secondsperletter)
{
	Utilities::printTextColor(text, color, secondsperletter);
	std::cout << std::endl;
}

void Utilities::newLine()
{
	std::cout << std::endl;
}

void Utilities::waitForInput(std::string waitforinputtext)
{
	Utilities::printTextColorNewLine(waitforinputtext, DEFAULT_WHITE, 1);
	std::cin.get();
	Utilities::clearScreen();

}





int Utilities::getInputInt(int minvalidvalue, int maxvalue)
{
	int payload;

	while (true)
	{
		std::cin >> payload;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cout << "Escribe un valor valido porfavor" << std::endl;
		}
		else
		{
			if (payload >= minvalidvalue, payload <= maxvalue) 
			{
			return payload;
			}

		}
	}
}



void Utilities::clearScreen()
{
	system("cls");
}
