#ifndef GAMESTATE_H
#define  GAMESTATE_H
#include "DialogueDataBase.h"
#include "Utilities.h"
#include "Inventory.h"
enum RoomID 
{
Intro,
Guardian1,
Guardian2,
Guardian3,
Guardian4
};
enum Ending
{
	Good,
	Bad,
	Death,
	None
};

class GameState
{
public:
	bool isClairvoyanceTutorialComplete=false;
	RoomID roomID;
	Inventory inv;
	Ending ending = None;
	void showPlayerActions( DialogueDataBase dialoguedatabase);
	void waitForPlayerAction(DialogueDataBase dialoguedatabase);
	bool hasPlayerDefeatedGuardian();

};

#endif