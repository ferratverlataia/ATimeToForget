#include "Inventory.h"
#include "GameState.h"


void Inventory::showInventory(DialogueDataBase dialoguedatabase)
{
	for(auto  item: items)
	{
	Utilities::printTextColorNewLine(dialoguedatabase.ObtainDialogueFromID(item), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
	}
}

int Inventory::utilizeObjectsInInventory(DialogueDataBase dialoguedatabase)
{
	if (!items.empty()) {
		
		
		auto itemid = items.at((Utilities::getInputInt(1, items.size() + 1))-1);
		if (itemid.compare("Items_1")) 
		{
			return 0;

		}
		else if (itemid.compare("Items_2"))
		{
			return 1;

		}
		else if(itemid.compare("Items_3"))
		{
			return 2;
		}
	}
}
