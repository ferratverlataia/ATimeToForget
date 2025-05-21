#include "Application.h"
#include "Utilities.h"
void Application::Initiliaze()
{
 dialogueDataBase.ConvertFromFileToMap("IDSheet.csv");
 Application::isrunning = true;
}

void Application::GameLoop()
{
//while (Application::isrunning)
    {
#pragma region Intro
        Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_1"),DEFAULT_WHITE, FAST_TEXT_SPEED );
        Utilities::WaitforInput();
        Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_2"), DEFAULT_WHITE, FAST_TEXT_SPEED);
        Utilities::WaitforInput();
		Utilities::ClearScreen();
		Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_3"), DEFAULT_WHITE, FAST_TEXT_SPEED);
		Utilities::WaitforInput();
		Utilities::ClearScreen();
		Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_4"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_5"), GREEN, MEDIUM_TEXT_SPEED);
		Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_6"), RED, MEDIUM_TEXT_SPEED);
		Utilities::WaitforInput();
		Utilities::ClearScreen();
		Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_7"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::WaitforInput();
		Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_8"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::WaitforInput();
		Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_9"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::WaitforInput();
		Utilities::ClearScreen();
		Utilities::PrintTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_10"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::WaitforInput();
#pragma endregion Intro
    }
}

void Application::OnExit()
{

}
