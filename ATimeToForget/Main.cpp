#include <iostream>
#include "Utilities.h"
#include "Application.h"
#include <Windows.h>

using namespace std;


int main()
{	
	std::locale::global(std::locale("en_US.UTF-8"));

	Application app;

	app.Initiliaze();

	app.GameLoop();

	app.OnExit();

	return 0;
}
