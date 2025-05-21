#include "DialogueDataBase.h"
#include "Utilities.h"

bool DialogueDataBase::ConvertFromFileToMap(const std::string documentname)
{

	std::ifstream  filestream;
	std::string  fileline, idname, dialoguevalue, word;
	const char seperator = ',';

	filestream.open(documentname, std::ios::in);
	if (filestream.is_open())
	{
		DialogueMap = std::map<std::string, std::string>();

		while (std::getline(filestream, fileline))
		{

			
			//if you want to break it in pieces you have to utilize this on the standard library
			std::stringstream linetobreak(fileline);
			std::getline(linetobreak, word, seperator);
			idname = word;
			std::getline(linetobreak, word, seperator);
			dialoguevalue = word;
			DialogueMap.insert({ idname,dialoguevalue });
		}

	}
	else

	{
		return false;
	}

	return true;

}


std::string DialogueDataBase::ObtainDialogueFromID(const std::string id)
{


	if (DialogueMap.find(id)==DialogueMap.end())
	{
		return "";
	}else
	{
	auto query = DialogueMap.find(id);
	return query->second;
	}

	
}
