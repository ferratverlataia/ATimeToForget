#include "Application.h"
#include "Utilities.h"
void Application::Initiliaze()
{
 dialogueDataBase.ConvertFromFileToMap("IDSheet.csv");
}

void Application::GameLoop()
{
while (Application::isrunning)
    {

        Utilities::WaitforInput();

    }
}

void Application::OnExit()
{

}
