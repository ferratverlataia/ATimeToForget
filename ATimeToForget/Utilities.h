#ifndef UTILITIES_H
#define UTILITIES_H
#pragma once
#include "DialogueDataBase.h"
#include <string>

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define RED 4
#define DEFAULT_WHITE 7


#define FAST_TEXT_SPEED 50
#define MEDIUM_TEXT_SPEED 100
#define SLOW_TEXT_SPEED 150
//this class is for utilities required throughout the whole project
class Utilities
{
public:

	static void printTextColor(std::string text, int color = DEFAULT_WHITE, int secondsperletter = 0);
	static void printTextColorNewLine(std::string text, int color = DEFAULT_WHITE, int secondsperletter = 0);
	static void clearScreen();
	static void newLine();
	static void waitForInput(std::string waitforinputtext);
	static int	getInputInt(int minvalidvalue,int maxvalue );
	
};

#endif // UTILITIES_H
