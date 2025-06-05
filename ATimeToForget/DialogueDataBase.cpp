#include "DialogueDataBase.h"
#include "Utilities.h"

bool DialogueDataBase::ConvertFromFileToMap(const std::string documentname)
{

	std::ifstream  filestream;
	std::string  fileline, idname, dialoguevalueesp, dialoguevalueeng, word;
	const char seperator = ',';

	filestream.open(documentname, std::ios::in);
	if (filestream.is_open())
	{
		dialogueMapes = std::map<std::string, std::string>();
		dialogueMapeng= std::map<std::string, std::string>();
		while (std::getline(filestream, fileline))
		{
			//if you want to break it in pieces you have to utilize this on the standard library
			std::stringstream linetobreak(fileline);
			std::getline(linetobreak, word, seperator);
			idname = word;
			std::getline(linetobreak, word, seperator);
			dialoguevalueesp = word;
			dialogueMapes.insert({ idname,dialoguevalueesp });
			std::getline(linetobreak, word, seperator);
			dialoguevalueeng = word;
			dialogueMapeng.insert({ idname,dialoguevalueeng });
		}

	}
	else

	{
		return false;
	}

	return true;

}


std::string DialogueDataBase::ObtainDialogueFromID( const std::string id)
{
	auto query = dialogueMapes.find(id);
	switch (language)
	{	
	case 0:
		if (dialogueMapes.find(id) == dialogueMapes.end())
		{
			return "";
		}
		else
		{
			query = dialogueMapes.find(id);
			return query->second;
		}
		break;
	case 1 :
		if (dialogueMapeng.find(id) == dialogueMapeng.end())
		{
			return "";
		}
		else
		{
			query = dialogueMapeng.find(id);
			return query->second;
		}
		break;
	}
	
		return "";

	
}
