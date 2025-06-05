#include <iostream>
#include <Windows.h>
#include "Utilities.h"
#include "Application.h"


using namespace std;


int main()
{	
	// we tell the standard library that we are gonna utilize
	//unicode and our console application are gonna be supported
	std::locale::global(std::locale("en_US.UTF-8"));

	Application app;

	app.Initiliaze();

	app.GameLoop();

	app.OnExit();

	return 0;
}
