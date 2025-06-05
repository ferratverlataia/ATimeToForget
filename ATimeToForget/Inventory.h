#ifndef INVENTORY_H
#define INVENTORY_H
#pragma once
#include "DialogueDataBase.h"
#include "Utilities.h"
#include <string>
#include <vector>

class Inventory
{ 
public:
	Inventory()
	{}
	std::vector<std::string> items;
	bool hasKnife = false;

	void showInventory(DialogueDataBase dialoguedatabase);

	int utilizeObjectsInInventory(DialogueDataBase dialoguedatabase);

};

#endif