#include "Utilities.h"
#include "DialogueDataBase.h"
#include <iostream>
#include <chrono>
#include <thread>
#include <windows.h>
#include <limits>

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

void Utilities::WaitforInput(std::string waitforinputtext)
{
	Utilities::PrintTextColorNewLine(waitforinputtext, DEFAULT_WHITE, 1);
	std::cin.get();
	Utilities::ClearScreen();

}



float Utilities::GetInputFloat()
{
	int payload;

	while(true) 
	{
		std::cin >> payload;
		if (std::cin.fail()) 
		{
			std::cin.clear();
			//std::cin.ignore(std::numeric_limits<std::streamsize>::max, '\n');
			std::cout << "Escribe un valor valido porfavor" <<std::endl;
		}
		else 
		{
			return payload;
		}
	}
	
}

int Utilities::GetInputInt()
{

}

std::string Utilities::GetInputString()
{

}

char Utilities::GetInputChar()
{

}

void Utilities::ClearScreen()
{
	system("cls");
}
