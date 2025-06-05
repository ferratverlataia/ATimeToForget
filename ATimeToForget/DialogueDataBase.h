#ifndef DIALOGUEDATABASE_H
#define DIALOGUEDATABASE_H
#pragma once
#include <map>
#include <sstream>
#include <fstream>
class DialogueDataBase
{
private:
	std::map<std::string, std::string> dialogueMapes;
		std::map<std::string, std::string> dialogueMapeng;

public:
	int language;
	bool ConvertFromFileToMap(const std::string documentname);
	std::string ObtainDialogueFromID(const std::string id);
};
#endif