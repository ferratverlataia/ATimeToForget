#include "Application.h"
#include "Utilities.h"
void Application::Initiliaze()
{
 dialogueDataBase.ConvertFromFileToMap("ATF-TextID.csv");
 Application::isRunning = true;
 gameState.isClairvoyanceTutorialComplete = false;
 //Windows needs it  to  be TEXT so the compiler does not scream at us
 PlaySound(TEXT("Music.wav"),NULL,SND_FILENAME|SND_ASYNC);
}

void Application::GameLoop()
{
//while (Application::isrunning)
    {

#pragma region Startup
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Title_1_1"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Title_1_2"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Title_1_3"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Title_1_4"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Title_1_5"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		dialogueDataBase.language = Utilities::getInputInt(0, 1);

#pragma endregion Startup
		
#pragma region Intro
		gameState.roomID = Intro;
        Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_1"),DEFAULT_WHITE, FAST_TEXT_SPEED );
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
        Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_2"), DEFAULT_WHITE, FAST_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_3"), DEFAULT_WHITE, FAST_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_4"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_5"), GREEN, MEDIUM_TEXT_SPEED);
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_6"), RED, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_7"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_8"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_9"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Intro_1_10"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
#pragma endregion Intro
#pragma region Guardian_1
		gameState.roomID = Guardian1;
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_1"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_11"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_12"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_13"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_14"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_15"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));

		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_16"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
#pragma endregion Guardian_1

	while (!gameState.hasPlayerDefeatedGuardian())
	{

		gameState.showPlayerActions(dialogueDataBase);
		gameState.waitForPlayerAction(dialogueDataBase);

	}

	switch (gameState.ending)
	{
	case Good:
#pragma region Guardian_1_Good_Ending
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_1"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_2"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_3"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_4"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_5"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_6"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_7"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_8"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_9"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_10"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_11"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_12"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_13"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_14"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_15"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Good_16"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
#pragma endregion Guardian_1_Good_Ending
		break;
	case Bad:
#pragma region Guardian_1_Bad_Ending
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_1"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_2"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_3"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_4"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_5"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_6"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_7"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_8"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_9"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_10"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_11"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_12"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_13"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_14"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_15"), DEFAULT_WHITE, SLOW_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Bad_16"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::waitForInput(dialogueDataBase.ObtainDialogueFromID("Input_1_1"));
#pragma endregion Guardian_1_Bad_Ending
		break;
	case Death:
#pragma region Guardian_1_Death_Ending
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Death_1"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Death_2"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Death_3"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Guardian_1_Death_4"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);
#pragma endregion Guardian_1_Death_Ending
		break;
	}

		Utilities::printTextColorNewLine(dialogueDataBase.ObtainDialogueFromID("Demo_End_1"), DEFAULT_WHITE, MEDIUM_TEXT_SPEED);

    }
}

void Application::OnExit()
{

}
