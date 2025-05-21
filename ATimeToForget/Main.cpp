#include <iostream>
#include "Utilities.h"
#include "Application.h"

using namespace std;


int main()
{

	Application app;

	app.Initiliaze();

	app.GameLoop();

	app.OnExit();
	return 0;
}
