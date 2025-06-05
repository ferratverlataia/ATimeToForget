#include "GameState.h"
void GameState::showPlayerActions( DialogueDataBase dialoguedatabase)
{
	Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("InventoryOptions_1_1"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
	Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("InventoryOptions_1_2"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
	Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("InventoryOptions_1_3"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
	if(inv.hasKnife)Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("InventoryOptions_1_4"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
	

}

void GameState::waitForPlayerAction(DialogueDataBase dialoguedatabase)
{

	
	
	if (!isClairvoyanceTutorialComplete) 
	{
		Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("Tutorial_1_1"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
	}
	// we have 4 options if we got the knife as the player
	switch (Utilities::getInputInt(1, inv.hasKnife ? 4 : 3))
	{
	case 1:
		inv.showInventory(dialoguedatabase);
		break;
	case 2:
		switch (inv.utilizeObjectsInInventory(dialoguedatabase)) 
		{
		
		case 0:
			ending = Good;
			break;
		case 1:
			ending = Bad;
			break;
		case 2:
			ending = Death;
			break;
		}
	
		break;
	case 3:
		if (!isClairvoyanceTutorialComplete) 
		{
	
			Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("Tutorial_1_2"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
			Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("Tutorial_1_3"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		}

		Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("Clairvoyance_1"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);

		switch (Utilities::getInputInt(1, 3)) 
		{
		case 1:
			inv.items.push_back("Items_1");
			break;
		case 2:
			inv.items.push_back("Items_2");
			break;
		case 3: 
			inv.items.push_back("Items_3");
			inv.hasKnife = true;
			break;

		}

		if (!isClairvoyanceTutorialComplete)
		{
			isClairvoyanceTutorialComplete = true;
			Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID("Tutorial_1_4"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);

		}

		break;
	}

}

bool GameState::hasPlayerDefeatedGuardian()
{
	return ending != None;
}
