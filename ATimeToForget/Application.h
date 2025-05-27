#ifndef APPLICATION_H
#define APPLICATION_H
#include "DialogueDataBase.h"


class Application
{
private:
	bool isrunning = false;
	DialogueDataBase dialogueDataBase;
public:
	Application()
	{

	}
	void Initiliaze();
	void GameLoop();
	void OnExit();
};


#endif // APPLICATION_H
