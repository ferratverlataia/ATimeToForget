#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>

#define BLACK 0
#define BLUE 1
#define GREEN 2
#define RED 4
#define DEFAULT_WHITE 7

class Utilities
{
public:

	static void PrintTextColor(std::string text, int color = DEFAULT_WHITE, int secondsperletter = 0);
	static void PrintTextColorNewLine(std::string text, int color = DEFAULT_WHITE, int secondsperletter = 0);
	static void ClearScreen();
	static void NewLine();
	static void WaitforInput();
};

#endif // UTILITIES_H
