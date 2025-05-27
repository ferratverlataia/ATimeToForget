#ifndef UTILITIES_H
#define UTILITIES_H
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

class Utilities
{
public:

	static void PrintTextColor(std::string text, int color = DEFAULT_WHITE, int secondsperletter = 0);
	static void PrintTextColorNewLine(std::string text, int color = DEFAULT_WHITE, int secondsperletter = 0);
	static void ClearScreen();
	static void NewLine();
	static void WaitforInput(std::string waitforinputtext);
	static float GetInputFloat();
	static int	GetInputInt();
	static std::string GetInputString();
	static char GetInputChar();
	
};

#endif // UTILITIES_H
