#ifndef APPLICATION_H
#define APPLICATION_H
//for audio handling 
#include <windows.h>
#include <mmsystem.h>
#include "DialogueDataBase.h"
#include "GameState.h"
//this includes the lib in win32 so that we dont need to ask windows for the dll manually
#pragma comment(lib,"winmm.lib")


class Application
{
private:
	int desiredLanguage;
	bool isRunning = false;
	DialogueDataBase dialogueDataBase;
	GameState gameState;
public:
	Application()
	{

	}
	void Initiliaze();
	void GameLoop();
	void OnExit();

};


#endif // APPLICATION_H
