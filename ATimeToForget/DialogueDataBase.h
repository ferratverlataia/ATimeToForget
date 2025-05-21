#ifndef DIALOGUEDATABASE_H
#define DIALOGUEDATABASE_H
#include <map>
#include <sstream>
#include <fstream>
class DialogueDataBase
{
private:
	std::map<std::string, std::string> DialogueMap;
public:
	bool ConvertFromFileToMap(const std::string documentname);
	std::string ObtainDialogueFromID(const std::string id);
};