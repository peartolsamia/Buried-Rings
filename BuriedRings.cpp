#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include <cstdlib>
#include "weaponClasses.h"
#include "heroClasses.h"
#include "enemyClasses.h"
#include "otherFuncs.h"


#include "weaponClasses.cpp"
#include "heroClasses.cpp"
#include "enemyClasses.cpp"
#include "otherFuncs.cpp"


using namespace std;

int main()
{
    int ChoiceFromStory;
    
    int isPlayerAlive{1};
    int start;

    cout<<endl<<"                         ~ BURIED RINGS ~"<<endl;
    cout<<endl<<"               1 : Begin Journey || 0 : Quit"<<endl;
    cin>>start;

    while(1)
    {
        if(start == 1)
            break;

        else if(start == 0)
            exit(0);

        else
            cin>>start;
    }

    Hero tempPlayer;

    ChoiceFromStory = tellTheStory(tempPlayer);

    if(ChoiceFromStory == 1)
    {
        Warrior *Player = new Warrior;
        (*Player).setName(tempPlayer.getName());

        chosenClass = 1;

        PlayTheGame(ChoiceFromStory, isPlayerAlive, *Player);
    }

    else if(ChoiceFromStory == 2)
    {
        Thief *Player = new Thief;
        (*Player).setName(tempPlayer.getName());

        chosenClass = 2;

        PlayTheGame(ChoiceFromStory, isPlayerAlive, *Player);
    }

    else if(ChoiceFromStory == 3)
    {
        LightMage *Player = new LightMage;
        (*Player).setName(tempPlayer.getName());

        chosenClass = 3;

        PlayTheGame(ChoiceFromStory, isPlayerAlive, *Player);
    }

    else if(ChoiceFromStory == 4)
    {
        DarkMage *Player = new DarkMage;
        (*Player).setName(tempPlayer.getName());

        chosenClass = 4;

        PlayTheGame(ChoiceFromStory, isPlayerAlive, *Player);
    }

    else if(ChoiceFromStory == 5)
    {
        Cleric *Player = new Cleric;
        (*Player).setName(tempPlayer.getName());

        chosenClass = 5;

        PlayTheGame(ChoiceFromStory, isPlayerAlive, *Player);
    }








    return 0;
}