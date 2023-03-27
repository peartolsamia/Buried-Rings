#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <cstdlib>
#include "otherFuncs.h"

using namespace std;

void resetTurns()
{
    turns = 0;
}

int enemyDiedGetMyCoins(Hero &player)
{
    int MinCoinDrop, MaxCoinDrop, droppedCoin;
    
    if(whatKindOfEnemyDied = 1)
    {
        MinCoinDrop = 0;
        MaxCoinDrop = 30;
    }

    else if(whatKindOfEnemyDied = 2)
    {
        MinCoinDrop = 50;
        MaxCoinDrop = 100;
    }

    else if(whatKindOfEnemyDied = 3)
    {
        MinCoinDrop = 200;
        MaxCoinDrop = 500;
    }

    srand(time(0));

    droppedCoin = MinCoinDrop + (rand() % (MaxCoinDrop - MinCoinDrop));

    player.addCoin(droppedCoin);

    whatKindOfEnemyDied = 0;

    return droppedCoin;

}

void removeGolemDebuff()
{
    GolemDebuffFlag = 0;
}

void removeVampireDebuff()
{
    VampireDebuffFlag = 0;
}

void removeSirenDebuff()
{
    SirenDebuffFlag = 0;
}


int tellTheStory(Hero &player)//tells a part of the story. every part ends with a choice. function adds +1 to requiredStoryPart for next part and returns the answer of the choice
{

    int ChoiceFrStory;
    
    if(requiredStoryPart == 1)
    {
        cout<<endl<<"Long time ago, there was a kingdom far away."<<endl<<"The king lived in this kingdom's royal castle, had everything but not much friends."<<endl;
        cout<<"He was conquering wherever he want with his fellow champions."<<endl<<"There were nine of them, nine unique and undefeatable champions were loyal to their king."<<endl;
        cout<<"And each of them were carrying a teleportation ring, what teleports carrier wherever desired."<<endl<<endl<<"But one day, they started to die one by one. They buried with their rings as a sign of respect."<<endl;
        cout<<"Kingdom has weakened by their suspicious deaths."<<endl<<endl<<"As mentioned already, king had no friends other than an employee of the kingdom."<<endl;
        cout<<"The king's only friend was the gardener of the kingdom."<<endl<<"The gardener was knowledgeable about plants, but his real interest was philosophy indeed."<<endl;
        cout<<"He and the gardener were talking about life, death and stuff like meaning of existence."<<endl<<"The king enjoyed their little conversations between these stressful days."<<endl;
        cout<<endl<<"He admired his friend so much that he raised his child after gardeners sad death."<<endl<<endl<<"The child was a brilliant and active kid."<<endl;
        cout<<"And kids name was... ";

        string Name;

        cin>>Name;

        player.setName(Name);

        cout<<endl<<player.getName()<<" has trained by the king himself and when became a champion, honored "<<player.getName()<<" with the last teleportation ring."<<endl;
        cout<<player.getName()<<" became this kind of champion... ";
        
        int acceptChoice = 0;

        while(acceptChoice != 1)
        {

            cout<<endl<<endl<<"Worrior : 1\nThief : 2\nLight Mage : 3\nDark Mage : 4\nCleric : 5"<<endl<<endl;
            cin>>ChoiceFrStory;

    
            if(ChoiceFrStory>=1 && ChoiceFrStory<=5)
            {
                if(ChoiceFrStory == 1)
                {
                    cout<<endl<<"Worriors have huge HP amount. They can't use very often but they can strike their enemies three times in a row with special attack. Uses an axe as a weapon."<<endl;

                    cout<<"Do you confirm your choice? (1 to confirm)"<<endl;
                    cin>>acceptChoice;
                }

                else if(ChoiceFrStory == 2)
                {
                    cout<<endl<<"Thieves are the fastest. They can deal certain critic damage with low amount of mana. Uses a dagger as a weapon."<<endl;

                    cout<<"Do you confirm your choice? (1 to confirm)"<<endl;
                    cin>>acceptChoice;
                }

                else if(ChoiceFrStory == 3)
                {
                    cout<<endl<<"Light Mages are the mages who connected to light gods. May kill instantly a dark creature with special strike. Uses a wand as a weapon."<<endl;

                    cout<<"Do you confirm your choice? (1 to confirm)"<<endl;
                    cin>>acceptChoice;
                }

                else if(ChoiceFrStory == 4)
                {
                    cout<<endl<<"Dark Mages are the mages who connected to dark gods. May kill instantly a light creature with special strike. Uses a wand as a weapon."<<endl;

                    cout<<"Do you confirm your choice? (1 to confirm)"<<endl;
                    cin>>acceptChoice;
                }

                else if(ChoiceFrStory == 5)
                {
                    cout<<endl<<"Clerics are religionous to ancient gods. They can totally heal themselves with support of old gods. Uses a talisman as a weapon."<<endl;

                    cout<<"Do you confirm your choice? (1 to confirm)"<<endl;
                    cin>>acceptChoice;
                }
            }


            else
            {
                cout<<"You may only choose between character classes 1 to 5!"<<endl;
            }

        }

        requiredStoryPart++;

        return ChoiceFrStory;

    }

    else if(requiredStoryPart == 2)
    {
        cout<<endl<<"As days chase days, "<<(player).getName()<<" goes on duties one after another, as the last champion of the kingdom."<<endl<<"But these duties were becoming obscure lastly."<<endl;
        cout<<"King was giving missions with small information."<<endl<<(player).getName()<<" was executing kings requests but didn't know why."<<endl;
        cout<<"According to the rumors, king has found the person who is behind the deaths of the champions."<<endl<<"And he will never stop until he hangs the murderers head to his wall, next to his hunting trophies."<<endl;
        cout<<endl<<"Another day, one more mission came from the king."<<endl<<"Says, you have to rescue a prisoner from a bandit camp. And nothing more."<<endl;
        cout<<endl<<"You have teleported to the camp at night and started to seek the prisoner."<<endl<<"But two men noticed you!"<<endl;

        requiredStoryPart++;

    }

    else if(requiredStoryPart == 3)
    {
        cout<<endl<<"After killing those two, you see a big tent."<<endl<<"Prisoner might be there. You can take the long way and sneak towards tent or run there quickly before anyone else comes."<<endl;
        
        while(1)
        {
        
            cout<<"Sneak long way (1) || Quick shortcut (2)"<<endl;
            cin>>ChoiceFrStory;

            if(ChoiceFrStory == 2 || ChoiceFrStory == 1)
            {
                break;
            }



        }

        requiredStoryPart ++;

        return ChoiceFrStory;
    }

    else if(requiredStoryPart == 4)
    {
        cout<<endl<<"You get inside the tent and you see an chained old lady."<<endl<<"She opens her eyes immediately, and says that she knows you."<<endl;
        cout<<endl<<" - Poor child, you are being tricked. Let me show you. For only a small price, your ring."<<endl<<"Says the women. And your curiosity awakens again."<<endl;
        cout<<"But without thinking so much you refuse the deal."<<endl<<"You can't trust her, you just met. And she is obviously the prisoner you are looking for."<<endl;
        cout<<endl<<"-What a pity, but unfortunately I must take that ring after all."<<endl<<"Says the women and grabs your wirst."<<endl;
        cout<<endl<<" - You are lucky because I always keep my word."<<endl<<"Says the women and you become unconscious. Then you saw a vision."<<endl;
        cout<<"In vision you see your dad and the king talking. But you can't hear them well."<<endl<<"They seems like they are arguing about something."<<endl;
        cout<<"After that you shook because of what you saw."<<endl<<"The King stabs your father with calmness!"<<endl;
        cout<<endl<<"You woke up shaking and confused."<<endl<<"You look around but the women dissapeared and your ring too!"<<endl;
        cout<<"Who was she? Did the vision really happened in the past?"<<endl<<"You knew only one thing that you have to find her, take back your ring and ask this question to The King himself."<<endl;
        cout<<endl<<"You came out of the tent and you see camp is burning."<<endl<<"When you look up you saw a dragon coming directly to you!"<<endl;

        requiredStoryPart ++;
    }

    else if(requiredStoryPart == 5)
    {
        cout<<endl<<"You killed those goblins. And you searched their clothes for something useful."<<endl<<"You found nothing but a card."<<endl;
        cout<<"~Harold The Merchant~ writes on the card. And there is an address on it."<<endl<<"Address is not far from your location. You decide to go there, get service and ask for the women."<<endl;
        cout<<endl<<"On your way to the shop, you see a dead man at the enterance of a cave. He is still holding something."<<endl<<"It's a map! And the location of the X is at the cave you stand in front of."<<endl;
        cout<<"If you enter you may find something precious but also dangerous."<<endl;

        while(1)
        {
            cout<<"Will you get in to the cave? (1 for yes, 2 for no)"<<endl;
            cin>>ChoiceFrStory;

            if(ChoiceFrStory == 2 || ChoiceFrStory == 1)
            {
                break;
            }

        }

        requiredStoryPart ++;

        return ChoiceFrStory;
    }

    else if(requiredStoryPart == 6)
    {
        cout<<endl<<"You arrived the shop after all."<<endl<<"When you enter through the door that says Harold The Merchant, you see the owner."<<endl;
        cout<<"His ring directly attaches to your eye. It's a teleportation ring!"<<endl<<"You that all rings has buried with champions and you have the last one."<<endl;
        cout<<"Bewildered you ask him how he got it."<<endl<<"He says that, there is nothing that he wants but can't reach."<<endl;
        cout<<"Then you tell him to sell it to you."<<endl<<"He laughs and says, there is no enough gold in anywhere to buy the ring from him."<<endl;
        cout<<"But he draws out a card and hands it to you. It's the same with the card that you take from the goblin."<<endl<<"You showed yours after."<<endl;
        cout<<endl<<"Harold says this belongs to Sam and asks that how did you get this card."<<endl<<"(1) I killed him. || (2) I found it on the ground. || (3) Who is Sam?"<<endl;
        
        int decision;

        while(1)
        {            
            cin>>decision;

            if(decision == 1)
            {
                cout<<endl<<"Merchant takes a deep breath and grievely says: "<<endl<<" - I'm is not surprised. I have told him to stop being annoying million times. God knows what did he done to you."<<endl;
                break;
            }

            else if(decision == 2)
            {
                cout<<endl<<"Merchant smiles with relief and says: "<<endl<<" - Yes, he is an idiot, he must have dropped it. I will not give a new one when he come and beg me."<<endl;
                break;
            }

            else if(decision == 3)
            {
                cout<<endl<<"Merchant says that he is a Goblin, also his old best friend. Then suddenly stops and says:"<<endl<<" - Nevermind. I don't care what happened to him."<<endl;
                break;
            }

            else
            {
                cout<<endl<<"(1) I killed him. || (2) I found it on the ground. || (3) Who is Sam?"<<endl;
            }
        }

        cout<<endl<<"Anyway, says merchant. And adds:"<<endl<<" - You can call me anytime with this card if area is safe. All you have to do is say the magic word. Then I'll be there with all my services."<<endl;
        cout<<"And says the magic word to you:"<<endl<<endl<<"HESSAVEHERMIO"<<endl<<endl;
        cout<<endl<<" - Do you wish to use my service now? "<<endl<<"Asks the merchant. (1 for yes, 2 for no)"<<endl;

        while(1)
        {            
            cin>>decision;

            if(decision == 1)
            {
                player.shop();
                break;
            }

            else if(decision == 2)
            {
                cout<<endl<<" - Okay then, you know what to do when you need me."<<endl<<"Says Harold."<<endl;
                break;
            }

            else
            {
                cout<<endl<<" - Do you wish to use my service now? (1 for yes, 2 for no)"<<endl;
            }
        }

        cout<<endl<<"One more thing, you say."<<endl<<"You ask for the old women who escaped."<<endl;
        cout<<"Merchant says no, He doesn't know the lady. But he adds:"<<endl<<" - There is a cult in this village, people call them REDCONSUMERS, they are getting together every night, if you welcome yourself in, they probably know her."<<endl;
        cout<<"And gives you the address they meet. And wishes luck."<<endl<<endl<<"But there is a problem. It's not night yet."<<endl;
        cout<<"You asked to Herald, what you can to to pass time around here."<<endl<<"Harold says:"<<endl;
        cout<<endl<<" - I have a bed back there. Feel free to sleep dear friend. Or we may play a game rather that. (1 for sleep, 2 for game)"<<endl;

        while(1)
        {            
            cin>>decision;

            if(decision == 1)
            {
                cout<<endl<<"You slept on Herald's bed."<<endl<<"He woke you up at sundown."<<endl;
                break;
            }

            else if(decision == 2)
            {
                int didGamePlayed;
                didGamePlayed = HaroldsGame(player);
                
                if(didGamePlayed == 1)
                {
                    cout<<endl<<"Time passed wile you were playing, it's almost dark outside."<<endl;
                }

                else if(didGamePlayed == -1)
                {
                    cout<<endl<<"You didn't want to play the game."<<endl;
                    cout<<"You slept on Herald's bed."<<endl<<"He woke you up at sundown."<<endl;
                }

                break;
            }

            else
            {
                cout<<endl<<"(1 for sleep, 2 for game)"<<endl;
            }
        }

        cout<<endl<<"You thanked Harold and got out of his shop. And set off to the address that he gave to you."<<endl;
        cout<<"There are two bandits protecting the door of building on the address."<<endl<<"You have to beat them to get inside."<<endl;

        requiredStoryPart ++;

    }

    else if(requiredStoryPart == 7)
    {
        cout<<endl<<"You get inside after beating those guys."<<endl<<"You heard voices from a room."<<endl;
        cout<<"When you looked inside from the keyhole, you see 2 person with masks singing some kind of ritual song and turning around a statue."<<endl;
        cout<<"The statue surprisingly looks like the old lady you are looking for."<<endl;

        while(1)
        {
            cout<<"Will you attack them or observe more? (1 for attack, 2 for observe)"<<endl;
            cin>>ChoiceFrStory;

            if(ChoiceFrStory == 2 || ChoiceFrStory == 1)
            {
                break;
            }

        }

        requiredStoryPart ++;

        return ChoiceFrStory;
    }

    else if(requiredStoryPart == 8)
    {
        cout<<endl<<"You started to examine the statue."<<endl<<"There are writings on the bottom of it but they all written in a language that you don't know."<<endl;
        cout<<"But they look familiar somehow."<<endl<<"They are similar with the words you need to say to summon Harold."<<endl;
        cout<<"You decided to call him here to translate the statement."<<endl<<"You need to remember the word. What was it? "<<endl;

        string magicWords;

        while(1)
        {
            cout<<endl<<"Write the magic word (They have to be all capital letters): ";
            cin>>magicWords;

            if(magicWords == "HESSAVEHERMIO")
            {
                break;
            }

            else
            {
                cout<<endl<<"It must be wrong! Nothing happened."<<endl;
            }

        }


        cout<<"Yes these were the word."<<endl<<"A fog covered the room and you saw the merchant after."<<endl;
        cout<<" - Hello fellow friend! Do you called me to use my service?"<<endl<<"Says Harold, But you say no, you can trade after a important issue."<<endl;
        cout<<"You ask him to translate the writings on the statue."<<endl<<endl<<"He looks at them closely and says there is a riddle. And translates it."<<endl;
        cout<<endl<<" ** YOU CAN'T DRINK, IT'S SALTY. HARD TO PASS, IF WEATHER IS WINDY ** "<<endl<<endl<<" - What can it be? Choose your answer carefully. I heard these riddle statues before. If you answer wrong, something terrible may happen."<<endl;
        cout<<"Says Harold."<<endl<<"What do you think it can be?"<<endl;

        int riddleAnswer, isSure;

        while(1)
        {
            cout<<"(1) Windmill || (2) Lake || (3) Piss || (4) A King"<<endl;
            cin>>riddleAnswer;

            if(riddleAnswer == 1 || riddleAnswer == 2 || riddleAnswer == 3 || riddleAnswer == 4)
            {
                cout<<"Are you sure with your answer? (1 for yes, 2 for no)"<<endl;
                cin>>isSure;

                if(isSure == 1)
                {                   
                    requiredStoryPart ++;

                    return riddleAnswer;
                }

                else if(isSure == 2)
                {}

                else
                {
                    cout<<endl<<"Please answer with 1 or 2 only."<<endl;
                }

            }

            else
            {
                cout<<endl<<"Answer with numbers 1 to 4."<<endl;
            }

        }



    }

    else if(requiredStoryPart == 9)
    {
        cout<<endl<<"Harold warns you about it's danger."<<endl<<" - I know that lake but I never heard anything about the island. And also this lake is huge and hard to find your way because of fog."<<endl;
        cout<<"Says the merchant, and gives you a pair of boots."<<endl<<" - These will allow you to walk on the water. They are on me. Safe hunts traveler!"<<endl;
        cout<<"Says Harold while he is handing his gift to you."<<endl<<endl<<" - Do you want to buy or upgrade something before you go? (1 for yes, 2 for no)"<<endl;

        int doYouWannaShop;

        while(1)
        {
            cin>>doYouWannaShop;

            if(doYouWannaShop == 1)
            {
                (player).shop();
                break;
            }

            else if(doYouWannaShop == 2)
            {
                cout<<endl<<" - Okay, See you soon then friend."<<endl;
                break;
            }

            else
            {
                cout<<endl<<"(1 for yes, 2 for no)";
            }

        }

        cout<<endl<<"You came to the foggy lake. And started to walk on your new boots."<<endl<<"While you are trying to see any sign of the island inside the fog, you saw a light and you heard a song at the opposite side of the light."<<endl;
        cout<<"You choose to look for the light and you ignored the song."<<endl<<"But it was like, your feet are resisting you. you were trying to go towards the light but you were getting close to the mysterious song."<<endl;
        cout<<"Then suddenly two sharks jumped out of the water."<<endl;

        requiredStoryPart ++;

    }

    else if(requiredStoryPart == 10)
    {
        cout<<endl<<"After killing those sharks, you continued your way to the song. Light was getting smaller in every step."<<endl<<"Eventually, you found the source of the sound."<<endl;
        cout<<"Three beautiful ladies was sitting on the edge of a cliff above you."<<endl<<"You asked with shouting, if they knew anything about the old lady."<<endl;
        cout<<"They didn't stop singing. Stragely you don't want them to stop either."<<endl<<endl<<"You said nothing after that. They are finishing a song and starting another. And you are listening them with silence."<<endl;
        cout<<"While you are hypnotized, three more sharks came."<<endl<<"You feel weak with the song in the background."<<endl;


        requiredStoryPart ++;

    }

    else if(requiredStoryPart == 11)
    {
        cout<<endl<<"Music stopped!"<<endl<<"You heared whispers up in the cliff."<<endl;
        cout<<endl<<"Then they jumped to the water and surround you."<<endl<<"They started to swim around you fastly."<<endl;
        cout<<"And one of them tried to attack you with her claws. Her face didn't attracted you this time."<<endl;

        requiredStoryPart ++;

    }

    else if(requiredStoryPart == 12)
    {
        
        areaIsSafeCallHarold(player);

        cout<<endl<<"You are free now. You can go wherever you want."<<endl<<"And you returned to seeking the light."<<endl;
        cout<<endl<<"Eventually, you arrive to the source of the light."<<endl<<"And it's coming from a lighthouse on a small island."<<endl;
        cout<<"But it doesn't seems like there is enough space to live. The lighthouse covers most of the island."<<endl<<"You step on anyway."<<endl;
        cout<<endl<<"When you get in to the lighthouse, you saw stairs leading to upstairs and basement."<<endl<<"Where do you want to go? (1 for basement, 2 for upstairs)"<<endl;

        int  shutterKeyFound{0}, treasureKeyFound{0}, shirtInfo{0}, basementOrUpstairs, basementOptions, gotOut, chestOpened{0};

        cin>>basementOrUpstairs;

        while(1)
        {


            if(basementOrUpstairs == 1)
            {
                cout<<endl<<"You go down through the stairs."<<endl<<"There is shutter on the floor, a scary painting on the wall and a corpse at the corner of the room."<<endl;

                while(1)
                {

                    cout<<endl<<"What do you want to do? (1 to check the shutter, 2 to examine the painting, 3 to check the dead body, 4 go to upstairs)"<<endl;

                    cin>>basementOptions;


                    if(basementOptions == 1)
                    {
                        if(shutterKeyFound == 0)
                        {
                            cout<<endl<<"You got closer to the shutter. But it seems it's locked. Lock has a big keyhole."<<endl;
                        }

                        else if(shutterKeyFound == 1)
                        {
                            cout<<endl<<"You have the right key. You can open the shutter and continue or stay here little more. (1 to open the shutter and go, 2 to stay)"<<endl;

                            while(1)
                            {
                                cin>>gotOut;

                                if(gotOut == 1)
                                {
                                    cout<<endl<<"You opened the shutter."<<endl;
                                    break;
                                }

                                else if(gotOut == 2)
                                {
                                    cout<<endl<<"You wanted to search more."<<endl;
                                    break;
                                }

                                else
                                {
                                    cout<<endl<<"(1 to open the shutter and go, 2 to stay)";
                                }

                            }
                        }


                    }

                    else if(basementOptions == 2)
                    {
                        cout<<endl<<"You came near to the painting. There is a creepy man on it and he is looking behind a painting and something is glowing on his shirt's pocket."<<endl;
                        
                        if(shutterKeyFound == 0)
                        {
                            cout<<endl<<"You looked behind the painting."<<endl<<"You found a large key there."<<endl;

                            shirtInfo = 1;
                            shutterKeyFound = 1;

                        }

                        else if(shutterKeyFound == 1)
                        {
                            cout<<endl<<"But you already checked the back of the painting."<<endl;

                        }

                    }

                    else if(basementOptions == 3)
                    {
                        if(treasureKeyFound == 0)
                        {

                            if(shirtInfo == 0)
                            {
                                cout<<endl<<"It looks like a regular dead body."<<endl;
                            }

                            else if(shirtInfo == 1)
                            {
                                cout<<endl<<"This man is the man on the painting. You can search his pockets for the shining thing on the painting."<<endl<<"You found a small key on his pocket."<<endl;

                                treasureKeyFound = 1;
                            }
                        }

                        else if(treasureKeyFound == 1)
                        {
                            cout<<endl<<"You already checked this man."<<endl;
                        }

                    }

                    else if(basementOptions == 4)
                    {
                        basementOrUpstairs = 2;

                        break;
                    }

                    else
                    {
                        cout<<endl<<"(1 to check the shutter, 2 to examine the painting, 3 to check the dead body, 4 go to upstairs)";
                        cin>>basementOptions;
                    }

                    if(gotOut == 1)
                        break;

                }

            }

            else if(basementOrUpstairs == 2)
            {
                cout<<endl<<"You climbed the stairs and there is only a chest with a small keyhole at the top of the lighthouse."<<endl;

                if(chestOpened == 0)
                {

                    if(treasureKeyFound == 0)
                    {
                        cout<<endl<<"Unfortunately, you don't have the right key."<<endl;
                    }

                    else if(treasureKeyFound == 1)
                    {
                        cout<<endl<<"You have that key. And you opened the chest."<<endl<<"There are 500 coins in it."<<endl;
                        player.addCoin(500);
                        chestOpened = 1;
                    }
                }

                else if(chestOpened == 1)
                {
                    cout<<endl<<"You opened the chest in here already."<<endl;
                }

                cout<<endl<<"There is nothing more up here. You go to the basement."<<endl;
                basementOrUpstairs = 1;
            }

            else
            {
                cout<<endl<<"(1 for basement, 2 for upstairs)";
                cin>>basementOrUpstairs;
            }

            if(gotOut == 1)
                break;

        }

        cout<<endl<<"You continued to go down after opening the shutter."<<endl<<"There is very little light. Few skulls on the floor are glowing. They are the only light sources."<<endl;
        cout<<"After all these stairs you made it. You saw a door at the end of stairs."<<endl;

        areaIsSafeCallHarold(player);

        cout<<endl<<"You opened the door in front of you."<<endl<<"You saw the old lady who stole your ring is there."<<endl;
        cout<<"She is speaking some language like harold does."<<endl<<"Then she notices you, and stops saying her words and says:"<<endl;
        cout<<" - Dear child, How did you found me? I'm glad you did. You seeked the truth about your father."<<endl<<"You said no, you are only seeking your ring."<<endl;
        cout<<" - Don't be that materialist, I offer you the truth."<<endl<<"Says the Witch. But you won't listen to her and you said that you will learn the truth from the king himself."<<endl;
        cout<<"Then you asked for the ring once more."<<endl<<" - I affraid I can't give it to you my child."<<endl;
        cout<<"Says the Witch. And summons a skeleton."<<endl<<"You said that you are going to take it in your way then."<<endl;


        requiredStoryPart ++;

    }

    else if(requiredStoryPart == 13)
    {
        cout<<endl<<"You killed the lady. And you get closer to search her body."<<endl<<"You found the ring in her neck, attached to a chain like a neckless."<<endl;
        cout<<"At the moment you try to snatch it from her neck, she touched to your wrist."<<endl<<"And you go into a trance again."<<endl;
        cout<<endl<<"You saw a village in your vision. After that, 9 warrior teleported the village. They were the champions of the king."<<endl<<"An old man from the village approached them and asked them if they need help or anything."<<endl;
        cout<<"There was a tall and blonde mage was standing front of the other champions, like a leader."<<endl<<"There was shame in his eyes. But he didn't answerd the old man. He only said ATTACK to other champions."<<endl;
        cout<<endl<<"They started with the old man and they killed everyone at the village."<<endl<<endl<<"Then you jumped to another vision."<<endl;
        cout<<"The leader of the champions and your father are talking."<<endl<<"Leader says that, he is sick of doing unsense attacks to people."<<endl;
        cout<<"Your father says, It's soon to kings fall."<<endl<<endl<<"And, another vision."<<endl;
        cout<<"This time you see a meeting at a grand table."<<endl<<"All champions are there but the Leader."<<endl;
        cout<<"He suddenly gets in and before the other champions gets what's coming, he starts to attack them."<<endl<<endl<<"He kills 3 of them easily but rest of them attacks together."<<endl;
        cout<<"After a long fight he takes down the other 5, but he couldn't stand no more."<<endl<<"All 9 champions died there."<<endl;
        cout<<endl<<"And then, another vision."<<endl<<"Now your father and the king are arguing. You know that scene. this is the vision you saw when the Witch stole your ring."<<endl;
        cout<<"But this time you can hear what they are talking."<<endl<<"King says that he know your father corrupted Harold and ordered to murder other champions."<<endl;
        cout<<"And like before you saw king stabs your father."<<endl;
        cout<<endl<<"Then you wake up. You feel like you completed a puzzle."<<endl<<"You have to ask Herald what's going on, then you need to talk to the king privately."<<endl;

        string magicWords;

        while(1)
        {
            cout<<endl<<"Write the magic word (They have to be all capital letters): ";
            cin>>magicWords;

            if(magicWords == "HESSAVEHERMIO")
            {
                break;
            }

            else
            {
                cout<<endl<<"It must be wrong! Nothing happened."<<endl;
            }

        }

        cout<<"He came and said, hello friend."<<endl<<"You asked directly if he was a leader of the champions earlier."<<endl;
        cout<<"He said yes, but these times are too far from now."<<endl<<"How did you survive from the fight?, you asked."<<endl;
        cout<<endl<<" - There was a lady in the castle, she always treated me well. She was working for the king too. I assume she was a sorceress or something. She turned me back to life."<<endl<<"She must be my fathers side, you thought"<<endl;
        cout<<endl<<"Harold wished you luck and teleported away."<<endl<<endl<<"You had no time to waste, you wore the ring and teleported to the Great Castle."<<endl;
        cout<<endl<<"You are at the Castle gates now. You can call Harold before get in."<<endl;

        areaIsSafeCallHarold(player);

        cout<<endl<<"You ordered gatekeepers to open the gates."<<endl<<"Gate opened. One of the gatekeepers said, King is waiting for you."<<endl;
        cout<<endl<<"You directly go to The King's throne room."<<endl<<"Two men were waiting at the entrance."<<endl;
        cout<<"They let you in."<<endl<<"There was one more guard at the right side of the King. But at the moment you take your first step into the room, you saw King's dissapointed face."<<endl;
        cout<<endl<<" - Where is the prisoner?"<<endl<<"He asked, referring to the Witch."<<endl;
        cout<<"You told him that you killed her."<<endl<<endl<<"King laughed madly. And yelled:"<<endl;
        cout<<" - You fool! You had one job. How did you failed? You are waste of time and effort. You are the worst champion ever. Get out of my sight!"<<endl<<"And he ordered his two guards at the door to throw you out."<<endl;
        cout<<"You said No, there are still issues to explain."<<endl<<"He said nothing and one of the guards tried grab your arm."<<endl;


        requiredStoryPart ++;

    }

    else if(requiredStoryPart == 14)
    {
        cout<<endl<<"You killed the King."<<endl<<endl<<"You feel relieved and you think that, you have done the right thing."<<endl;
        cout<<endl<<"But What now?"<<endl<<endl<<"You don't have the answer of this question yet."<<endl;
        cout<<endl<<"You feel tired."<<endl<<endl<<"You thought, you can figure that later."<<endl;
        cout<<endl<<"You teleported to the roof of the Witch's lighthouse."<<endl<<endl<<"It's sunset now."<<endl;
        cout<<endl<<"You are watching the sun is getting down over all the way you passed during the adventure."<<endl<<endl<<"You are not thinking about the question, What now?"<<endl;
        cout<<endl<<"Yes, you will figure it out later."<<endl<<endl<<endl<<endl<<"THE END"<<endl<<endl<<"Thank You For Playing."<<endl;

    }

    else if(requiredStoryPart == 15)
    {
        cout<<endl<<"You kneeled before your king."<<endl<<endl<<"He said, that was a wise choice. And also coward"<<endl;
        cout<<endl<<" - Give me some time to forget what you did."<<endl<<"Said the King. And you approved with your head."<<endl;
        cout<<endl<<"Few weeks after that day, King ordered you another mission."<<endl<<"There wasn't much information about the duty again."<<endl;
        cout<<endl<<"And your life went on like this."<<endl<<endl<<"King ordered, you did. Never dissapointed your king again."<<endl;
        cout<<endl<<"You died as a champion. And you buried to King's castle with your ring."<<endl;
        cout<<endl<<endl<<endl<<endl<<"THE END"<<endl<<endl<<"Thank You For Playing."<<endl;

    }


}

void areaIsSafeCallHarold(Hero &player)
{
        cout<<"Area is safe. Do you want to call Harold? (1 for yes, 2 for no)"<<endl;

        int doYouWannaShop, giveUp{2}, shopVisited{0};

        while(1)
        {
            cin>>doYouWannaShop;

            if(doYouWannaShop == 1)
            {
                string magicWords;

                while(1)
                {
                    cout<<endl<<"Write the magic word (They have to be all capital letters): ";
                    cin>>magicWords;

                    if(magicWords == "HESSAVEHERMIO")
                    {
                        (player).shop();
                        shopVisited = 1;
                        break;
                    }

                    else
                    {
                        cout<<endl<<"It must be wrong! Nothing happened."<<endl;
                        cout<<"Do you want to give up calling the merchant? (1 for yes, 2 for no)"<<endl;
                        
                        cin>>giveUp;

                        while(1)
                        {
                            if(giveUp == 1 || giveUp == 2)
                            {
                                break;
                            }

                            else
                            {
                                cout<<"Do you want to give up calling the merchant? (1 for yes, 2 for no)"<<endl;
                                cin>>giveUp;
                            }

                        }

                        if(giveUp == 1)
                            break;

                    }

                }

                if(giveUp == 1)
                {
                    doYouWannaShop = 2;
                }
            }

            if(shopVisited == 1)
            {
                break;
            }

            if(doYouWannaShop == 2)
            {
                cout<<endl<<"You didn't called him."<<endl;
                break;
            }

            else
            {
                cout<<endl<<"(1 for yes, 2 for no)";
            }



        }
}

void printPlayersStats(Hero player)
{
    cout<<endl<<player.getName()<<":"<<endl;
    cout<<"HP : "<<player.getHealth()<<"/"<<player.getMaxHealth()<<endl;
    cout<<"Healing Potions : "<<player.getPots()<<endl;
    cout<<"Mana : "<<player.getMana()<<endl;
    cout<<"Coins : "<<player.getCoins()<<endl;
}

void printEnemyStats(Enemy foe)
{
    cout<<endl<<foe.getType()<<":"<<endl;
    cout<<"HP : "<<foe.getHealth()<<"/"<<foe.getMaxHealth()<<endl;
    cout<<"("<<foe.getLightOrDark()<<")"<<endl;

}

int HaroldsGame(Hero &player)
{
    int decision, round{1};
    int didGameEnded{0};

    cout<<endl<<"Okay, here we go. Do you know how to play? (1 for yes, 2 for no)"<<endl;

    cin>>decision;

    while(1)
    {            
        if(decision == 1)
        {
            while(1)
            {
                srand(time(NULL));

                didGameEnded = HaroldGuess(player, rand(), round);

                if(didGameEnded == 1)
                {
                    return 1;
                }

                round++;

            }


        }

        else if(decision == 2)
        {
            cout<<endl<<"It's simple. I will choose a number 1 to 9."<<endl<<"And you will try to guess, if it is lower than 5 or not."<<endl;
            cout<<"Also we can put money on it if you want."<<endl<<"Are you ready to play? ( (1) Yes I am. || (2) No I don't want to play. )"<<endl;

            while(1)
            {            
                cin>>decision;

                if(decision == 1)
                {
                    break;
                }

                else if(decision == 2)
                {
                    return -1;//If game didn't played
                }

                else
                {
                    cout<<endl<<"Are you ready to play? ( (1) Yes I am. || (2) No I don't want to play. )"<<endl;
                }
            }

        }

        else
        {
            cout<<endl<<"Do you know how to play? (1 for yes, 2 for no)"<<endl;
        }
    }
}

int HaroldGuess(Hero &player, int random, int round)
{
    int decision, bet, haroldsNum{5};
    string lowOrHigh;
    
    cout<<endl<<"Round "<<round<<endl<<"How much coins do you want you bet? (You can type 0 if you want to play just for fun.)"<<endl<<"You have ("<<player.getCoins()<<") coins."<<endl;

    cin>>bet;

    if(bet >= 0 && bet <= player.getCoins())
    {

        while (haroldsNum == 5)
        {
            haroldsNum = rand() % 10;
        }
                    
        cout<<endl<<"I choose my number."<<endl<<"Is it lower or higher than 5? (low / high)"<<endl;

        while(1)
        {            
            cin>>lowOrHigh;

            if(lowOrHigh == "low")
            {
                if(haroldsNum >= 5)
                {
                    cout<<endl<<"You lose!"<<endl<<"Number was "<<haroldsNum<<". ( - "<<bet<<" coins )"<<endl;
                    player.loseCoin(bet);
                }

                else if(haroldsNum <= 5)
                {
                    cout<<endl<<"You win!"<<endl<<"Number was "<<haroldsNum<<". ( + "<<bet<<" coins )"<<endl;
                    player.addCoin(bet);
                }


                break;
            }

            else if(lowOrHigh == "high")
            {
                if(haroldsNum >= 5)
                {
                    cout<<endl<<"You win!"<<endl<<"Number was "<<haroldsNum<<". ( + "<<bet<<" coins )"<<endl;
                    player.addCoin(bet);
                }

                else if(haroldsNum <= 5)
                {
                    cout<<endl<<"You lose!"<<endl<<"Number was "<<haroldsNum<<". ( - "<<bet<<" coins )"<<endl;
                    player.loseCoin(bet);
                }


                break;
            }

            else
            {
                cout<<endl<<"Is it lower or higher than 5? (low / high)"<<endl;
            }
        }

                
        cout<<endl<<"Do you want to play again? (1 for continue, 2 for stop)"<<endl;

        while(1)
        {            
            cin>>decision;

            if(decision == 1)
            {
                return 0;
            }

            else if(decision == 2)
            {
                return 1;//Game Ended
            }

            else
            {
                cout<<endl<<"Do you want to play again? (1 for continue, 2 for stop)"<<endl;
            }
        }

    }

    else if(bet <= 0)
    {
        cout<<endl<<"Really? Do you bet negative coins? That's not possible my friend."<<endl;
    }

    else if(bet >= player.getCoins())
    {
        cout<<endl<<"I afraid you don't have that much coins."<<endl;
    }

}

int CombatOptions()
{
    int selectedChoice;

    cout<<endl<<"Standard Attack (1) || Special Attack (2) || Use Pot (3) || Print Your Stats (4) || Print Enemy Stats (5)"<<endl;
    cin>>selectedChoice;

    if(selectedChoice >= 1 && selectedChoice <= 5)
    {
        return selectedChoice;
    }

    else
    {
        cout<<"Please type a number 1 to 5."<<endl;
        return 0;
    }


}


template <class T>

int WarriorPlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = player.SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;

}

template <class T>

int WarriorPlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;
        int howManyTargets;
        
        if(isEnemy1Alive && isEnemy2Alive)
        {
            cout<<"How many enemies do you want to attack? (1 or 2)"<<endl;

            cin>>howManyTargets;
        }

        else
        {
            howManyTargets == 1;
        }

        if(howManyTargets == 1)
        {
            cout<<"Which enemy do you want to attack?"<<endl;

            if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
            if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

            cin>>whichEnemy;

            if(whichEnemy == 1)
            {

                if(isEnemy1Alive)
                {
                    isManaEnough = player.SpecialAttack(enemy1, rand());
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                    isManaEnough = 0;
                }
                                
                if(isManaEnough == 1)
                {
                    flag = 1;
                }
            }

            if(whichEnemy == 2)
            {

                if(isEnemy2Alive)
                {
                    isManaEnough = player.SpecialAttack(enemy2, rand());
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                    isManaEnough = 0;
                }
                                
                if(isManaEnough == 1)
                {
                    flag = 1;
                }
            }


            else
            {
                cout<<"Please choose an existing enemy."<<endl;
            }
        }

        else if(howManyTargets == 2)
        {
            if(isEnemy1Alive && isEnemy2Alive)
            {
                isManaEnough = player.SpecialAttack(enemy1, enemy2);
            }

            else
            {
                cout<<"There is no enemy, at least one of these numbers."<<endl;
                isManaEnough = 0;
            }
                                
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        else
        {
            cout<<"There are only 2 enemies in this fight."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }
                        
    }

    return flag;
}

template <class T>

int WarriorPlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttack(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;
        int howManyTargets;
        int EnemiesLeft;
        int selectedEnemies[3];

        selectedEnemies[0]=0;
        selectedEnemies[1]=0;
        selectedEnemies[2]=0;

        
        
        if(isEnemy1Alive && isEnemy2Alive && isEnemy3Alive)
        {
            cout<<"How many enemies do you want to attack? (1, 2 or 3)"<<endl;

            EnemiesLeft = 3;

            cin>>howManyTargets;
        }

        else if(isEnemy1Alive && isEnemy2Alive)
        {
            cout<<"How many enemies do you want to attack? (1 or 2)"<<endl;

            EnemiesLeft = 2;

            cin>>howManyTargets;
        }

        else if(isEnemy2Alive && isEnemy3Alive)
        {
            cout<<"How many enemies do you want to attack? (1 or 2)"<<endl;

            EnemiesLeft = 2;

            cin>>howManyTargets;
        }

        else if(isEnemy1Alive && isEnemy3Alive)
        {
            cout<<"How many enemies do you want to attack? (1 or 2)"<<endl;

            EnemiesLeft = 2;

            cin>>howManyTargets;
        }

        else
        {
            howManyTargets == 1;
        }

        if(howManyTargets == 1)
        {
            cout<<"Which enemy do you want to attack?"<<endl;

            if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
            if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
            if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

            cin>>whichEnemy;

            if(whichEnemy == 1)
            {

                if(isEnemy1Alive)
                {
                    isManaEnough = player.SpecialAttack(enemy1, rand());
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                    isManaEnough = 0;
                }
                                
                if(isManaEnough == 1)
                {
                    flag = 1;
                }
            }

            if(whichEnemy == 2)
            {

                if(isEnemy2Alive)
                {
                    isManaEnough = player.SpecialAttack(enemy2, rand());
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                    isManaEnough = 0;
                }
                                
                if(isManaEnough == 1)
                {
                    flag = 1;
                }
            }

            if(whichEnemy == 3)
            {

                if(isEnemy3Alive)
                {
                    isManaEnough = player.SpecialAttack(enemy3, rand());
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                    isManaEnough = 0;
                }
                                
                if(isManaEnough == 1)
                {
                    flag = 1;
                }
            }


            else
            {
                cout<<"Please choose an existing enemy."<<endl;
            }
        }

        else if(howManyTargets == 2)
        {
            cout<<"Enter first enemy you want to choose. "<<endl;

            if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
            if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
            if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

            cin>>whichEnemy;

            if(whichEnemy == 1)
            {
                selectedEnemies[0] = 1;
            }

            else if(whichEnemy == 2)
            {
                selectedEnemies[1] = 1;
            }

            else if(whichEnemy == 3)
            {
                selectedEnemies[2] = 1;
            }



            cout<<"Enter second enemy you want to choose. "<<endl;

            if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
            if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
            if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

            cin>>whichEnemy;

            if(whichEnemy == 1)
            {
                if(selectedEnemies[0] == 1)
                {
                    cout<<"You have selected this enemy at the first time."<<endl;
                }

                else if(selectedEnemies[0] == 0)
                {
                    selectedEnemies[0] = 1;
                }
            }

            else if(whichEnemy == 2)
            {
                if(selectedEnemies[1] == 1)
                {
                    cout<<"You have selected this enemy at the first time."<<endl;
                }

                else if(selectedEnemies[1] == 0)
                {
                    selectedEnemies[1] = 1;
                }
            }

            else if(whichEnemy == 3)
            {
                if(selectedEnemies[2] == 1)
                {
                    cout<<"You have selected this enemy at the first time."<<endl;
                }

                else if(selectedEnemies[2] == 0)
                {
                    selectedEnemies[2] = 1;
                }
            }

            if(selectedEnemies[0] && selectedEnemies[1])
            {

                if(isEnemy1Alive && isEnemy2Alive)
                {
                    isManaEnough = player.SpecialAttack(enemy1, enemy2);
                }

                else
                {
                    cout<<"There is no enemy, at least one of these numbers."<<endl;
                    isManaEnough = 0;
                }
                                    
                if(isManaEnough == 1)
                {
                    flag = 1;
                }

            }

            if(selectedEnemies[0] && selectedEnemies[2])
            {

                if(isEnemy1Alive && isEnemy3Alive)
                {
                    isManaEnough = player.SpecialAttack(enemy1, enemy3);
                }

                else
                {
                    cout<<"There is no enemy, at least one of these numbers."<<endl;
                    isManaEnough = 0;
                }
                                    
                if(isManaEnough == 1)
                {
                    flag = 1;
                }

            }

            if(selectedEnemies[1] && selectedEnemies[2])
            {

                if(isEnemy2Alive && isEnemy3Alive)
                {
                    isManaEnough = player.SpecialAttack(enemy2, enemy3);
                }

                else
                {
                    cout<<"There is no enemy, at least one of these numbers."<<endl;
                    isManaEnough = 0;
                }
                                    
                if(isManaEnough == 1)
                {
                    flag = 1;
                }

            }
        }

        else if(howManyTargets == 3)
        {
            if(isEnemy1Alive && isEnemy2Alive && isEnemy3Alive)
            {
                isManaEnough = player.SpecialAttack(enemy1, enemy2, enemy3);
            }

            else
            {
                cout<<"There are less than 3 enemies in the fight."<<endl;
                isManaEnough = 0;
            }
                                    
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            if(EnemiesLeft == 2)
            {
                cout<<"There are only 2 enemies in this fight."<<endl;
            }

            if(EnemiesLeft == 3)
            {
                cout<<"There are only 3 enemies in this fight."<<endl;
            }
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}

template <class T>

int WarriorPlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithGolemDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;
}

template <class T>

int WarriorPlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;
        int howManyTargets;
        int EnemiesLeft;
        int selectedEnemies[3];

        selectedEnemies[0]=0;
        selectedEnemies[1]=0;
        selectedEnemies[2]=0;

        
        
        if(isEnemy1Alive && isEnemy2Alive && isEnemy3Alive)
        {
            cout<<"How many enemies do you want to attack? (1, 2 or 3)"<<endl;

            EnemiesLeft = 3;

            cin>>howManyTargets;
        }

        else if(isEnemy1Alive && isEnemy2Alive)
        {
            cout<<"How many enemies do you want to attack? (1 or 2)"<<endl;

            EnemiesLeft = 2;

            cin>>howManyTargets;
        }

        else if(isEnemy2Alive && isEnemy3Alive)
        {
            cout<<"How many enemies do you want to attack? (1 or 2)"<<endl;

            EnemiesLeft = 2;

            cin>>howManyTargets;
        }

        else if(isEnemy1Alive && isEnemy3Alive)
        {
            cout<<"How many enemies do you want to attack? (1 or 2)"<<endl;

            EnemiesLeft = 2;

            cin>>howManyTargets;
        }

        else
        {
            howManyTargets == 1;
        }

        if(howManyTargets == 1)
        {
            cout<<"Which enemy do you want to attack?"<<endl;

            if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
            if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
            if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

            cin>>whichEnemy;

            if(whichEnemy == 1)
            {

                if(isEnemy1Alive)
                {
                    isManaEnough = (player).SpecialAttack(enemy1, rand());
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                    isManaEnough = 0;
                }
                                
                if(isManaEnough == 1)
                {
                    flag = 1;
                }
            }

            if(whichEnemy == 2)
            {

                if(isEnemy2Alive)
                {
                    isManaEnough = (player).SpecialAttack(enemy2, rand());
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                    isManaEnough = 0;
                }
                                
                if(isManaEnough == 1)
                {
                    flag = 1;
                }
            }

            if(whichEnemy == 3)
            {

                if(isEnemy3Alive)
                {
                    isManaEnough = (player).SpecialAttack(enemy3, rand());
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                    isManaEnough = 0;
                }
                                
                if(isManaEnough == 1)
                {
                    flag = 1;
                }
            }


            else
            {
                cout<<"Please choose an existing enemy."<<endl;
            }
        }

        else if(howManyTargets == 2)
        {
            cout<<"Enter first enemy you want to choose. "<<endl;

            if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
            if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
            if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

            cin>>whichEnemy;

            if(whichEnemy == 1)
            {
                selectedEnemies[0] = 1;
            }

            else if(whichEnemy == 2)
            {
                selectedEnemies[1] = 1;
            }

            else if(whichEnemy == 3)
            {
                selectedEnemies[2] = 1;
            }



            cout<<"Enter second enemy you want to choose. "<<endl;

            if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
            if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
            if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

            cin>>whichEnemy;

            if(whichEnemy == 1)
            {
                if(selectedEnemies[0] == 1)
                {
                    cout<<"You have selected this enemy at the first time."<<endl;
                }

                else if(selectedEnemies[0] == 0)
                {
                    selectedEnemies[0] = 1;
                }
            }

            else if(whichEnemy == 2)
            {
                if(selectedEnemies[1] == 1)
                {
                    cout<<"You have selected this enemy at the first time."<<endl;
                }

                else if(selectedEnemies[1] == 0)
                {
                    selectedEnemies[1] = 1;
                }
            }

            else if(whichEnemy == 3)
            {
                if(selectedEnemies[2] == 1)
                {
                    cout<<"You have selected this enemy at the first time."<<endl;
                }

                else if(selectedEnemies[2] == 0)
                {
                    selectedEnemies[2] = 1;
                }
            }

            if(selectedEnemies[0] && selectedEnemies[1])
            {

                if(isEnemy1Alive && isEnemy2Alive)
                {
                    isManaEnough = (player).SpecialAttack(enemy1, enemy2);
                }

                else
                {
                    cout<<"There is no enemy, at least one of these numbers."<<endl;
                    isManaEnough = 0;
                }
                                    
                if(isManaEnough == 1)
                {
                    flag = 1;
                }

            }

            if(selectedEnemies[0] && selectedEnemies[2])
            {

                if(isEnemy1Alive && isEnemy3Alive)
                {
                    isManaEnough = (player).SpecialAttack(enemy1, enemy3);
                }

                else
                {
                    cout<<"There is no enemy, at least one of these numbers."<<endl;
                    isManaEnough = 0;
                }
                                    
                if(isManaEnough == 1)
                {
                    flag = 1;
                }

            }

            if(selectedEnemies[1] && selectedEnemies[2])
            {

                if(isEnemy2Alive && isEnemy3Alive)
                {
                    isManaEnough = (player).SpecialAttack(enemy2, enemy3);
                }

                else
                {
                    cout<<"There is no enemy, at least one of these numbers."<<endl;
                    isManaEnough = 0;
                }
                                    
                if(isManaEnough == 1)
                {
                    flag = 1;
                }

            }
        }

        else if(howManyTargets == 3)
        {
            if(isEnemy1Alive && isEnemy2Alive && isEnemy3Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, enemy2, enemy3);
            }

            else
            {
                cout<<"There are less than 3 enemies in the fight."<<endl;
                isManaEnough = 0;
            }
                                    
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            if(EnemiesLeft == 2)
            {
                cout<<"There are only 2 enemies in this fight."<<endl;
            }

            if(EnemiesLeft == 3)
            {
                cout<<"There are only 3 enemies in this fight."<<endl;
            }
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}


template <class T>

int ThiefPlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;

}

template <class T>

int ThiefPlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 2)
        {

            if(isEnemy2Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }
                        
    }

    return flag;
}

template <class T>

int ThiefPlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttack(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 2)
        {

            if(isEnemy2Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 3)
        {

            if(isEnemy3Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy3, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}

template <class T>

int ThiefPlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithGolemDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;
}

template <class T>

int ThiefPlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        else if(whichEnemy == 2)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        else if(whichEnemy == 3)
        {

            if(isEnemy3Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy3, random);
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}


template <class T>

int LightMagePlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;

}

template <class T>

int LightMagePlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 2)
        {

            if(isEnemy2Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }
                        
    }

    return flag;
}

template <class T>

int LightMagePlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttack(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 2)
        {

            if(isEnemy2Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 3)
        {

            if(isEnemy3Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy3, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}

template <class T>

int LightMagePlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithGolemDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;
}

template <class T>

int LightMagePlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        else if(whichEnemy == 2)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        else if(whichEnemy == 3)
        {

            if(isEnemy3Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy3, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}


template <class T>

int DarkMagePlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;

}

template <class T>

int DarkMagePlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 2)
        {

            if(isEnemy2Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }
                        
    }

    return flag;
}

template <class T>

int DarkMagePlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttack(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 2)
        {

            if(isEnemy2Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        if(whichEnemy == 3)
        {

            if(isEnemy3Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy3, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}

template <class T>

int DarkMagePlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithGolemDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;
}

template <class T>

int DarkMagePlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int whichEnemy;
        int isManaEnough;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        if(whichEnemy == 1)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy1, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        else if(whichEnemy == 2)
        {

            if(isEnemy1Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy2, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }

        else if(whichEnemy == 3)
        {

            if(isEnemy3Alive)
            {
                isManaEnough = (player).SpecialAttack(enemy3, rand());
            }

            else
            {
                cout<<"There is no enemy in that number."<<endl;
                isManaEnough = 0;
            }
                            
            if(isManaEnough == 1)
            {
                flag = 1;
            }
        }


        else
        {
            cout<<"Please choose an existing enemy."<<endl;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}


template <class T>

int ClericPlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int isManaEnough;

        isManaEnough = (player).SpecialAttack(enemy1, rand());
         
        if(isManaEnough == 1)
        {
            flag = 1;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;

}

template <class T>

int ClericPlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int isManaEnough;

        isManaEnough = (player).SpecialAttack(enemy1, rand());
         
        if(isManaEnough == 1)
        {
            flag = 1;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }
                        
    }

    return flag;
}

template <class T>

int ClericPlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttack(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttack(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttack(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int isManaEnough;

        isManaEnough = (player).SpecialAttack(enemy1, rand());
         
        if(isManaEnough == 1)
        {
            flag = 1;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}

template <class T>

int ClericPlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithGolemDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;



                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int isManaEnough;

        isManaEnough = (player).SpecialAttack(enemy1, rand());
         
        if(isManaEnough == 1)
        {
            flag = 1;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);       
        }
                        
    }

    return flag;
}

template <class T>

int ClericPlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive)
{
    int flag=0;

    int playersChoice = CombatOptions();

    if(playersChoice == 1)//player choosed standard attack
    {
        int whichEnemy;

        cout<<"Which enemy do you want to attack?"<<endl;

        if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}
        if(isEnemy2Alive){cout<<(enemy2).getType()<<"(2)"<<endl;}
        if(isEnemy3Alive){cout<<(enemy3).getType()<<"(3)"<<endl;}

        cin>>whichEnemy;

        switch (whichEnemy)
        {
            case 1:

                if(isEnemy1Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy1, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 2:

                if(isEnemy2Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy2, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

            case 3:

                if(isEnemy3Alive)
                {
                    (player).StandardAttackWithSirenDebuff(enemy3, random);
                    flag = 1;
                                    
                }

                else
                {
                    cout<<"There is no enemy in that number."<<endl;
                                    
                }

                break;

                            
            default:
                cout<<"Enemy "<<whichEnemy<<" doesn't exist."<<endl;
                                
                                
        }

    }

    else if(playersChoice == 2)//player choosed special attack
    {
        int isManaEnough;

        isManaEnough = (player).SpecialAttack(enemy1, rand());
         
        if(isManaEnough == 1)
        {
            flag = 1;
        }

    }

    else if(playersChoice == 3)//player choosed use pot
    {
        if((player).getPots() >= 1)
        {
            (player).usePot();
        }

        else
        {
            cout<<"You have no healing potion!"<<endl;
        }
    }

    else if(playersChoice == 4)//player choosed print your stats
    {
        printPlayersStats(player);
    }

    else if(playersChoice == 5)//player choosed print enemy stats
    {
        if(isEnemy1Alive)
        {
            printEnemyStats(enemy1);        
        }

        if(isEnemy2Alive)
        {      
            printEnemyStats(enemy2);  
        }

        if(isEnemy3Alive)
        {
            printEnemyStats(enemy3);  
        }
                        
    }

    return flag;
}


template <class T>

int Combat(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player)
{
    enemyCnt = 3;

    int isEnemy1Alive = 1, isEnemy2Alive = 1, isEnemy3Alive = 1;


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {

            srand(time(NULL));

            int DidPlayerAttacked{0};

            cout<<endl<<endl<<"~ YOUR TURN ~";

            while(1)
            {
                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }
                
                



            }





            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }


            if(isEnemy2Alive)
            {
                if ((enemy2).getHealth() <= 0)
                {
                    cout<<endl<<(enemy2).getType()<<" is Dead!"<<endl;
                    delete &enemy2;
                    isEnemy2Alive = 0;
                    enemyCnt--;
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }

            }


            if(isEnemy3Alive)
            {
                if ((enemy3).getHealth() <= 0)
                {
                    cout<<endl<<(enemy3).getType()<<" is Dead!"<<endl;
                    delete &enemy3;
                    isEnemy3Alive = 0;
                    enemyCnt--;
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }

            }
                





            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}

            if(isEnemy1Alive)
            {
                (enemy1).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }


            if(isEnemy2Alive)
            {
                (enemy2).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }


            if(isEnemy3Alive)
            {
                (enemy3).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }



        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T>

int Combat(Enemy &enemy1, Enemy &enemy2, T &player)
{
    enemyCnt = 2;

    int isEnemy1Alive = 1, isEnemy2Alive = 1;


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {

            srand(time(NULL));

            int DidPlayerAttacked{0};

            cout<<endl<<endl<<"~ YOUR TURN ~";

            while(1)
            {
                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }





            }





            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }


            if(isEnemy2Alive)
            {
                if ((enemy2).getHealth() <= 0)
                {
                    cout<<endl<<(enemy2).getType()<<" is Dead!"<<endl;
                    delete &enemy2;
                    isEnemy2Alive = 0;
                    enemyCnt--;
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }

            }

                





            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}

            if(isEnemy1Alive)
            {
                (enemy1).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }


            if(isEnemy2Alive)
            {
                (enemy2).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }





        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T> 

int Combat(Enemy &enemy1, T &player)
{
    enemyCnt = 1;

    int isEnemy1Alive = 1;


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {

                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurn(enemy1, player, rand(), isEnemy1Alive);
                    

                    if(DidPlayerAttacked == 1)
                        break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurn(enemy1, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                        break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurn(enemy1, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                        break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurn(enemy1, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                        break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurn(enemy1, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                        break;
                }


            }



            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }




            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}

            if(isEnemy1Alive)
            {
                (enemy1).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }

        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T>

int CombatDragonFight1(Dragon &enemy, T &player)
{
    enemyCnt = 1;

    int isEnemy1Alive = 1;

    int DragonSpecialCnt{0};


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {

            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {
                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

            }





            //at %40 health dragon will flee


            if(isEnemy1Alive)
            {
                if((enemy).getHealth() <= 40)
                {
                    cout<<endl<<(enemy).getType()<<" started to flap its wings. Even it is injured, dragon successfully run away and fled in battle."<<endl;
                    break;
                }
            }


                




            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}


            if(DragonSpecialCnt == 3)
            {
                (enemy).SpecialAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }

                DragonSpecialCnt = 0;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy).StandardAttack(player, rand());

                    DragonSpecialCnt++;

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }




        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T>

int CombatDragonFight2(Dragon &enemy, T &player)
{
    enemyCnt = 1;

    int isEnemy1Alive = 1;

    int DragonSpecialCnt{0};


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {
                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }


            }


            if(isEnemy1Alive)
            {
                if((enemy).getHealth() <= 0)
                {
                    cout<<endl<<"Congratulations! "<<(enemy).getType()<<" is Dead!"<<endl;
                    delete &enemy;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }


            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}


            if(DragonSpecialCnt == 3)
            {
                (enemy).SpecialAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }

                DragonSpecialCnt = 0;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy).StandardAttack(player, rand());

                    DragonSpecialCnt++;

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }




        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T>

int CombatVampireFight(Vampire &enemy1, Vampire &enemy2, T &player)
{
    enemyCnt = 2;

    int isEnemy1Alive = 1, isEnemy2Alive = 1;

    int Vampire1SpecialCnt{0}, Vampire2SpecialCnt{0};
    int V1BleedCnt{0}, V2BleedCnt{0};

    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {

            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {
                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

            }





            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }


            if(isEnemy2Alive)
            {
                if ((enemy2).getHealth() <= 0)
                {
                    cout<<endl<<(enemy2).getType()<<" is Dead!"<<endl;
                    delete &enemy2;
                    isEnemy2Alive = 0;
                    enemyCnt--;
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }

            }

                





            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}


            if(VampireDebuffFlag == 1)
            {
                enemy1.StandardAttackAfterBleedDamage(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }

                V1BleedCnt++;

                if(V1BleedCnt == 2)
                {
                    V1BleedCnt = 0;
                    VampireDebuffFlag = 0;
                    Vampire1SpecialCnt = 0;
                }
            }
            
            else
            {
                if(Vampire1SpecialCnt == 7)
                {
                    enemy1.SpecialAttack(player);

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }

                else
                {
                    if(isEnemy1Alive)
                    {
                        (enemy1).StandardAttack(player, rand());

                        Vampire1SpecialCnt++;

                        if((player).getHealth() <= 0)
                        {
                            delete &player;
                            heroDied = 1;
                            break;
                        }
                    }
                }

            }


            if(VampireDebuffFlag == 1)
            {
                enemy2.StandardAttackAfterBleedDamage(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }

                V2BleedCnt++;

                if(V2BleedCnt == 2)
                {
                    V2BleedCnt = 0;
                    VampireDebuffFlag = 0;
                    Vampire2SpecialCnt = 0;
                }
            }
            
            else
            {
                if(Vampire2SpecialCnt == 7)
                {
                    enemy2.SpecialAttack(player);

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }

                else
                {

                    if(isEnemy2Alive)
                    {
                        (enemy2).StandardAttack(player, rand());

                        Vampire2SpecialCnt++;

                        if((player).getHealth() <= 0)
                        {
                            delete &player;
                            heroDied = 1;
                            break;
                        }
                    }

                }
            }


        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T>

int CombatVampireFight(Vampire &enemy1, Vampire &enemy2, Vampire &enemy3, T &player)
{
    enemyCnt = 3;

    int isEnemy1Alive = 1, isEnemy2Alive = 1, isEnemy3Alive = 1;

    int Vampire1SpecialCnt{0}, Vampire2SpecialCnt{0}, Vampire3SpecialCnt{0};
    int V1BleedCnt{0}, V2BleedCnt{0}, V3BleedCnt{0};

    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {
                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

            }





            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }


            if(isEnemy2Alive)
            {
                if ((enemy2).getHealth() <= 0)
                {
                    cout<<endl<<(enemy2).getType()<<" is Dead!"<<endl;
                    delete &enemy2;
                    isEnemy2Alive = 0;
                    enemyCnt--;
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }

            }

            if(isEnemy3Alive)
            {
                if ((enemy3).getHealth() <= 0)
                {
                    cout<<endl<<(enemy3).getType()<<" is Dead!"<<endl;
                    delete &enemy3;
                    isEnemy3Alive = 0;
                    enemyCnt--;
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }

            }    





            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}


            if(VampireDebuffFlag == 1)
            {
                enemy1.StandardAttackAfterBleedDamage(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }

                V1BleedCnt++;

                if(V1BleedCnt == 2)
                {
                    V1BleedCnt = 0;
                    VampireDebuffFlag = 0;
                    Vampire1SpecialCnt = 0;
                }
            }
            
            else
            {
                if(Vampire1SpecialCnt == 7)
                {
                    enemy1.SpecialAttack(player);

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }

                else
                {
                    if(isEnemy1Alive)
                    {
                        (enemy1).StandardAttack(player, rand());

                        Vampire1SpecialCnt++;

                        if((player).getHealth() <= 0)
                        {
                            delete &player;
                            heroDied = 1;
                            break;
                        }
                    }
                }

            }


            if(VampireDebuffFlag == 1)
            {
                enemy2.StandardAttackAfterBleedDamage(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }

                V2BleedCnt++;

                if(V2BleedCnt == 2)
                {
                    V2BleedCnt = 0;
                    VampireDebuffFlag = 0;
                    Vampire2SpecialCnt = 0;
                }
            }
            
            else
            {
                if(Vampire2SpecialCnt == 7)
                {
                    enemy2.SpecialAttack(player);

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }

                else
                {

                    if(isEnemy2Alive)
                    {
                        (enemy2).StandardAttack(player, rand());

                        Vampire2SpecialCnt++;

                        if((player).getHealth() <= 0)
                        {
                            delete &player;
                            heroDied = 1;
                            break;
                        }
                    }

                }
            }

            if(VampireDebuffFlag == 1)
            {
                enemy3.StandardAttackAfterBleedDamage(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }

                V3BleedCnt++;

                if(V3BleedCnt == 2)
                {
                    V3BleedCnt = 0;
                    VampireDebuffFlag = 0;
                    Vampire3SpecialCnt = 0;
                }
            }
            
            else
            {
                if(Vampire3SpecialCnt == 7)
                {
                    enemy3.SpecialAttack(player);

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }

                else
                {

                    if(isEnemy3Alive)
                    {
                        (enemy3).StandardAttack(player, rand());

                        Vampire3SpecialCnt++;

                        if((player).getHealth() <= 0)
                        {
                            delete &player;
                            heroDied = 1;
                            break;
                        }
                    }

                }
            }


        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T>

int CombatGolemFight(Golem &enemy, T &player)
{
    enemyCnt = 1;

    int isEnemy1Alive = 1;

    int GolemSpecialCnt{0};


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {
                if(GolemDebuffFlag == 0)
                {
                    if(chosenClass == 1)
                    {
                        DidPlayerAttacked = WarriorPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 2)
                    {
                        DidPlayerAttacked = ThiefPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 3)
                    {
                        DidPlayerAttacked = LightMagePlayersTurn(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 4)
                    {
                        DidPlayerAttacked = DarkMagePlayersTurn(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 5)
                    {
                        DidPlayerAttacked = ClericPlayersTurn(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                }

                else if(GolemDebuffFlag == 1)
                {

                    if(chosenClass == 1)
                    {
                        DidPlayerAttacked = WarriorPlayersTurnWithGolemDebuff(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 2)
                    {
                        DidPlayerAttacked = ThiefPlayersTurnWithGolemDebuff(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 3)
                    {
                        DidPlayerAttacked = LightMagePlayersTurnWithGolemDebuff(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 4)
                    {
                        DidPlayerAttacked = DarkMagePlayersTurnWithGolemDebuff(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 5)
                    {
                        DidPlayerAttacked = ClericPlayersTurnWithGolemDebuff(enemy, player, rand(), isEnemy1Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }


                }


            }


            if(isEnemy1Alive)
            {
                if((enemy).getHealth() <= 0)
                {
                    cout<<endl<<"Congratulations! "<<(enemy).getType()<<" is Dead!"<<endl;
                    delete &enemy;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }


            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}


            if(GolemSpecialCnt == 4)
            {
                (enemy).SpecialAttack(player);

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }

                GolemSpecialCnt = 0;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy).StandardAttack(player, rand());

                    GolemSpecialCnt++;

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }




        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T>

int CombatSirenFight(Siren &enemy1, Siren &enemy2, Siren &enemy3, T &player)
{
    enemyCnt = 3;

    int isEnemy1Alive = 1;
    int isEnemy2Alive = 1;
    int isEnemy3Alive = 1;

    int Siren1SpecialCnt{0}, Siren2SpecialCnt{0}, Siren3SpecialCnt{0};

    int flag1{0}, flag2{0}, flag3{0};


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {
                if(SirenDebuffFlag == 0)
                {
                    if(chosenClass == 1)
                    {
                        DidPlayerAttacked = WarriorPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 2)
                    {
                        DidPlayerAttacked = ThiefPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 3)
                    {
                        DidPlayerAttacked = LightMagePlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 4)
                    {
                        DidPlayerAttacked = DarkMagePlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 5)
                    {
                        DidPlayerAttacked = ClericPlayersTurn(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                }

                else if(SirenDebuffFlag == 1)
                {

                    if(chosenClass == 1)
                    {
                        DidPlayerAttacked = WarriorPlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 2)
                    {
                        DidPlayerAttacked = ThiefPlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 3)
                    {
                        DidPlayerAttacked = LightMagePlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 4)
                    {
                        DidPlayerAttacked = DarkMagePlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }

                    else if(chosenClass == 5)
                    {
                        DidPlayerAttacked = ClericPlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                        if(DidPlayerAttacked == 1)
                        break;
                    }


                }


            }


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<"Congratulations! "<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }

            if(isEnemy2Alive)
            {
                if((enemy2).getHealth() <= 0)
                {
                    cout<<endl<<"Congratulations! "<<(enemy2).getType()<<" is Dead!"<<endl;
                    delete &enemy2;
                    isEnemy2Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }

            if(isEnemy3Alive)
            {
                if((enemy3).getHealth() <= 0)
                {
                    cout<<endl<<"Congratulations! "<<(enemy3).getType()<<" is Dead!"<<endl;
                    delete &enemy3;
                    isEnemy3Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }


            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}


            if(Siren1SpecialCnt == 3)
            {
                (enemy1).SpecialAttack(player);

                Siren1SpecialCnt = 0;

                flag1 = 1;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy1).StandardAttack(player, rand());

                    if(flag1 == 0)
                    {
                        Siren1SpecialCnt++;
                    }

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }

            if(Siren2SpecialCnt == 3)
            {
                (enemy2).SpecialAttack(player);

                Siren2SpecialCnt = 0;

                flag2 = 1;
            }

            else
            {
                if(isEnemy2Alive)
                {
                    (enemy2).StandardAttack(player, rand());

                    if(flag2 == 0)
                    {
                        Siren2SpecialCnt++;
                    }

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }

            if(Siren3SpecialCnt == 3)
            {
                (enemy3).SpecialAttack(player);

                Siren3SpecialCnt = 0;

                flag1 = 1;
            }

            else
            {
                if(isEnemy3Alive)
                {
                    (enemy3).StandardAttack(player, rand());

                    if(flag3 == 0)
                    {
                        Siren3SpecialCnt++;
                    }

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }




        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        removeSirenDebuff();
        
        return 1;
    }

}

template <class T>

int CombatSharkFightWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player)
{
    enemyCnt = 3;

    int isEnemy1Alive = 1, isEnemy2Alive = 1, isEnemy3Alive = 1;


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {

            srand(time(NULL));

            int DidPlayerAttacked{0};

            cout<<endl<<endl<<"~ YOUR TURN ~";

            while(1)
            {
                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurnWithSirenDebuff(enemy1, enemy2, enemy3, player, rand(), isEnemy1Alive, isEnemy2Alive, isEnemy3Alive);
                    
                        
                    if(DidPlayerAttacked == 1)
                    break;
                }




            }





            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }


            if(isEnemy2Alive)
            {
                if ((enemy2).getHealth() <= 0)
                {
                    cout<<endl<<(enemy2).getType()<<" is Dead!"<<endl;
                    delete &enemy2;
                    isEnemy2Alive = 0;
                    enemyCnt--;
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }

            }


            if(isEnemy3Alive)
            {
                if ((enemy3).getHealth() <= 0)
                {
                    cout<<endl<<(enemy3).getType()<<" is Dead!"<<endl;
                    delete &enemy3;
                    isEnemy3Alive = 0;
                    enemyCnt--;
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }

            }
                





            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}

            if(isEnemy1Alive)
            {
                (enemy1).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }


            if(isEnemy2Alive)
            {
                (enemy2).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }


            if(isEnemy3Alive)
            {
                (enemy3).StandardAttack(player, rand());

                if((player).getHealth() <= 0)
                {
                    delete &player;
                    heroDied = 1;
                    break;
                }
            }



        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        removeSirenDebuff();
        
        return 1;
    }

}

template <class T>

int CombatWitchFight(Witch &enemy1, T &player)
{
    enemyCnt = 2;

    int isEnemy1Alive = 1;

    int WitchSpecialCnt{0};

    bowSkeleton *enemySk = new bowSkeleton[30];
    vector <int> ThereIsASkeletonInThisLoc(30, 0);

    int i{1}, flag2{0};

    ThereIsASkeletonInThisLoc[0] = 2;


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {

                int flag=0;

                int playersChoice = CombatOptions();

                if(playersChoice == 1)//player choosed standard attack
                {
                    int whichEnemy;

                    cout<<"Which enemy do you want to attack?"<<endl;

                    if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

                    for(int j{0}; j<30; j++)
                    {
                        if(ThereIsASkeletonInThisLoc[j] != 0){cout<<(enemySk[j]).getType()<<"("<<ThereIsASkeletonInThisLoc[j]<<")"<<endl;}
                    }

                    cin>>whichEnemy;


                    if(whichEnemy == 1)
                    {

                        if(isEnemy1Alive)
                        {
                            (player).StandardAttack(enemy1, rand());
                            flag = 1;
                                            
                        }

                        else
                        {
                            cout<<"There is no enemy in that number."<<endl;
                                            
                        }

                        flag2 = 1;
                    }

                    for(int j{0}; j<30; j++)
                    {

                        if(whichEnemy == ThereIsASkeletonInThisLoc[j])
                        {

                            if(ThereIsASkeletonInThisLoc[j] != 0)
                            {
                                (player).StandardAttack(enemySk[j], rand());
                                flag = 1;
                                                
                            }

                            else
                            {
                                cout<<"There is no enemy in that number."<<endl;
                                                
                            }

                            flag2 = 1;
                        }

                    }


                    if(flag2 == 0)
                    {
                        cout<<"Please choose an existing enemy."<<endl;
                    }

                    flag2 = 0;

        
                }

                else if(playersChoice == 2)//player choosed special attack
                {
                    int whichEnemy;
                    int isManaEnough;

                    cout<<"Which enemy do you want to attack?"<<endl;

                    if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

                    for(int j{0}; j<30; j++)
                    {
                        if(ThereIsASkeletonInThisLoc[j] != 0){cout<<(enemySk[j]).getType()<<"("<<ThereIsASkeletonInThisLoc[j]<<")"<<endl;}
                    }

                    cin>>whichEnemy;

                    if(whichEnemy == 1)
                    {

                        if(isEnemy1Alive)
                        {
                            isManaEnough = (player).SpecialAttack(enemy1, rand());
                        }

                        else
                        {
                            cout<<"There is no enemy in that number."<<endl;
                            isManaEnough = 0;

                        }
                                        
                        if(isManaEnough == 1)
                        {
                            flag = 1;
                        }

                        flag2 = 1;
                    }

                    for(int j{0}; j<30; j++)
                    {

                        if(whichEnemy == ThereIsASkeletonInThisLoc[j])
                        {
                            if(ThereIsASkeletonInThisLoc[j] != 0)
                            {
                                isManaEnough = (player).SpecialAttack(enemySk[j], rand());
                            }

                            else
                            {
                                cout<<"There is no enemy in that number."<<endl;
                                isManaEnough = 0;
                            }
                                            
                            if(isManaEnough == 1)
                            {
                                flag = 1;
                            }

                            flag2 = 1;

                        }
                    }


                    if(flag2 == 0)
                    {
                        cout<<"Please choose an existing enemy."<<endl;
                    }

                    flag2 = 0;

                }

                else if(playersChoice == 3)//player choosed use pot
                {
                    if((player).getPots() >= 1)
                    {
                        (player).usePot();
                    }

                    else
                    {
                        cout<<"You have no healing potion!"<<endl;
                    }
                }

                else if(playersChoice == 4)//player choosed print your stats
                {
                    printPlayersStats(player);
                }

                else if(playersChoice == 5)//player choosed print enemy stats
                {
                    if(isEnemy1Alive)
                    {
                        printEnemyStats(enemy1);        
                    }

                    for(int j{0}; j<30; j++)
                    {

                        if(ThereIsASkeletonInThisLoc[j] != 0)
                        {      
                            printEnemyStats(enemySk[j]);  
                        }
                    }
                                    
                }



                if(flag == 1)
                    break;
                


            }



            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }

            for(int j{0}; j<30; j++)
            {

                if(ThereIsASkeletonInThisLoc[j] != 0)
                {      
                    if((enemySk[j]).getHealth() <= 0)
                    {
                        cout<<endl<<(enemySk[j]).getType()<<" is Dead!"<<endl;
                        delete &enemySk[j];
                        ThereIsASkeletonInThisLoc[j] = 0;
                        enemyCnt--;                   
                        cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                    }
                }
            }




            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}

            if(WitchSpecialCnt == 2)
            {
                cout<<"Witch hit the ground with her wand and summoned another skeleton ally on her side."<<endl;

                ThereIsASkeletonInThisLoc[i] = i+2;

                WitchSpecialCnt = 0;
                enemyCnt++;
                i++;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy1).StandardAttack(player, rand());

                    WitchSpecialCnt++;

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }

            int breakk{0};

            for(int j{0}; j<30; j++)
            {

                if(ThereIsASkeletonInThisLoc[j] != 0)
                {
                    (enemySk[j]).StandardAttack(player, rand());

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        breakk = 1;
                        break;
                    }
                }

            }

            if (breakk == 1)
                break;    
        
            

        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }
}

template <class T>

int ClericCombatWitchFight(Witch &enemy1, T &player)
{
    enemyCnt = 2;

    int isEnemy1Alive = 1;

    int WitchSpecialCnt{0};

    bowSkeleton *enemySk = new bowSkeleton[30];
    vector <int> ThereIsASkeletonInThisLoc(30, 0);

    int i{1}, flag2{0};

    ThereIsASkeletonInThisLoc[0] = 2;


    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {

                int flag=0;

                int playersChoice = CombatOptions();

                if(playersChoice == 1)//player choosed standard attack
                {
                    int whichEnemy;

                    cout<<"Which enemy do you want to attack?"<<endl;

                    if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

                    for(int j{0}; j<30; j++)
                    {
                        if(ThereIsASkeletonInThisLoc[j] != 0){cout<<(enemySk[j]).getType()<<"("<<ThereIsASkeletonInThisLoc[j]<<")"<<endl;}
                    }

                    cin>>whichEnemy;


                    if(whichEnemy == 1)
                    {

                        if(isEnemy1Alive)
                        {
                            (player).StandardAttack(enemy1, rand());
                            flag = 1;
                                            
                        }

                        else
                        {
                            cout<<"There is no enemy in that number."<<endl;
                                            
                        }

                        flag2 = 1;
                    }

                    for(int j{0}; j<30; j++)
                    {

                        if(whichEnemy == ThereIsASkeletonInThisLoc[j])
                        {

                            if(ThereIsASkeletonInThisLoc[j] != 0)
                            {
                                (player).StandardAttack(enemySk[j], rand());
                                flag = 1;
                                                
                            }

                            else
                            {
                                cout<<"There is no enemy in that number."<<endl;
                                                
                            }

                            flag2 = 1;
                        }

                    }


                    if(flag2 == 0)
                    {
                        cout<<"Please choose an existing enemy."<<endl;
                    }

                    flag2 = 0;

        
                }

                else if(playersChoice == 2)//player choosed special attack
                {

                    int isManaEnough;
                    
                    isManaEnough = (player).SpecialAttack(enemy1, rand());
                    
                                        
                    if(isManaEnough == 1)
                    {
                        flag = 1;
                    }



                }

                else if(playersChoice == 3)//player choosed use pot
                {
                    if((player).getPots() >= 1)
                    {
                        (player).usePot();
                    }

                    else
                    {
                        cout<<"You have no healing potion!"<<endl;
                    }
                }

                else if(playersChoice == 4)//player choosed print your stats
                {
                    printPlayersStats(player);
                }

                else if(playersChoice == 5)//player choosed print enemy stats
                {
                    if(isEnemy1Alive)
                    {
                        printEnemyStats(enemy1);        
                    }

                    for(int j{0}; j<30; j++)
                    {

                        if(ThereIsASkeletonInThisLoc[j] != 0)
                        {      
                            printEnemyStats(enemySk[j]);  
                        }
                    }
                                    
                }



                if(flag == 1)
                    break;
                


            }



            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }

            for(int j{0}; j<30; j++)
            {

                if(ThereIsASkeletonInThisLoc[j] != 0)
                {      
                    if((enemySk[j]).getHealth() <= 0)
                    {
                        cout<<endl<<(enemySk[j]).getType()<<" is Dead!"<<endl;
                        delete &enemySk[j];
                        ThereIsASkeletonInThisLoc[j] = 0;
                        enemyCnt--;                   
                        cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                    }
                }
            }




            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}

            if(WitchSpecialCnt == 2)
            {
                cout<<"Witch hit the ground with her wand and summoned another skeleton ally on her side."<<endl;

                ThereIsASkeletonInThisLoc[i] = i+2;

                WitchSpecialCnt = 0;
                enemyCnt++;
                i++;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy1).StandardAttack(player, rand());

                    WitchSpecialCnt++;

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }

            int breakk{0};

            for(int j{0}; j<30; j++)
            {

                if(ThereIsASkeletonInThisLoc[j] != 0)
                {
                    (enemySk[j]).StandardAttack(player, rand());

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        breakk = 1;
                        break;
                    }
                }

            }

            if (breakk == 1)
                break;

        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }
}

template <class T>

int CombatKingsGuardFight(KingsGuard &enemy1, KingsGuard &enemy2, T &player)
{
    enemyCnt = 2;

    int isEnemy1Alive = 1;
    int isEnemy2Alive = 1;

    int Guard1SpecialCnt{0};
    int Guard2SpecialCnt{0};



    while(1)
    {


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {
                if(chosenClass == 1)
                {
                    DidPlayerAttacked = WarriorPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 2)
                {
                    DidPlayerAttacked = ThiefPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 3)
                {
                    DidPlayerAttacked = LightMagePlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 4)
                {
                    DidPlayerAttacked = DarkMagePlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }

                else if(chosenClass == 5)
                {
                    DidPlayerAttacked = ClericPlayersTurn(enemy1, enemy2, player, rand(), isEnemy1Alive, isEnemy2Alive);
                
                    
                    if(DidPlayerAttacked == 1)
                    break;
                }


            }


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<"Congratulations! "<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }

            if(isEnemy2Alive)
            {
                if((enemy2).getHealth() <= 0)
                {
                    cout<<endl<<"Congratulations! "<<(enemy2).getType()<<" is Dead!"<<endl;
                    delete &enemy2;
                    isEnemy2Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }



            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}


            if(Guard1SpecialCnt == 4)
            {
                (enemy1).SpecialAttack(player);

                Guard1SpecialCnt = 0;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy1).StandardAttack(player, rand());

                    Guard1SpecialCnt++;

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }



            if(Guard2SpecialCnt == 4)
            {
                (enemy2).SpecialAttack(player);

                Guard2SpecialCnt = 0;
            }

            else
            {
                if(isEnemy2Alive)
                {
                    (enemy2).StandardAttack(player, rand());

                    Guard2SpecialCnt++;

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }




        }
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }

}

template <class T>

int CombatKingFight(TheKing &enemy1, T &player)
{
    enemyCnt = 2;

    int isEnemy1Alive = 1;

    int guardDown{0};

    KingsGuard *enemyKg = new KingsGuard[10];
    vector <int> ThereIsAKingsGuardInThisLoc(10, 0);
    vector <int> GuardSpecialCnt(10, 0);


    int i{1}, flag2{0};

    ThereIsAKingsGuardInThisLoc[0] = 2;



    while(1)
    {

        int breakk{0};


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {

                int flag=0;

                int playersChoice = CombatOptions();

                if(playersChoice == 1)//player choosed standard attack
                {
                    int whichEnemy;

                    cout<<"Which enemy do you want to attack?"<<endl;

                    if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

                    for(int j{0}; j<10; j++)
                    {
                        if(ThereIsAKingsGuardInThisLoc[j] != 0){cout<<(enemyKg[j]).getType()<<"("<<ThereIsAKingsGuardInThisLoc[j]<<")"<<endl;}
                    }

                    cin>>whichEnemy;


                    if(whichEnemy == 1)
                    {

                        if(isEnemy1Alive)
                        {
                            (player).StandardAttack(enemy1, rand());
                            flag = 1;
                                            
                        }

                        else
                        {
                            cout<<"There is no enemy in that number."<<endl;
                                            
                        }

                        flag2 = 1;
                    }

                    for(int j{0}; j<10; j++)
                    {

                        if(whichEnemy == ThereIsAKingsGuardInThisLoc[j])
                        {

                            if(ThereIsAKingsGuardInThisLoc[j] != 0)
                            {
                                (player).StandardAttack(enemyKg[j], rand());
                                flag = 1;
                                                
                            }

                            else
                            {
                                cout<<"There is no enemy in that number."<<endl;
                                                
                            }

                            flag2 = 1;
                        }

                    }


                    if(flag2 == 0)
                    {
                        cout<<"Please choose an existing enemy."<<endl;
                    }

                    flag2 = 0;

        
                }

                else if(playersChoice == 2)//player choosed special attack
                {
                    int whichEnemy;
                    int isManaEnough;

                    cout<<"Which enemy do you want to attack?"<<endl;

                    if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

                    for(int j{0}; j<10; j++)
                    {
                        if(ThereIsAKingsGuardInThisLoc[j] != 0){cout<<(enemyKg[j]).getType()<<"("<<ThereIsAKingsGuardInThisLoc[j]<<")"<<endl;}
                    }

                    cin>>whichEnemy;

                    if(whichEnemy == 1)
                    {

                        if(isEnemy1Alive)
                        {
                            isManaEnough = (player).SpecialAttack(enemy1, rand());
                        }

                        else
                        {
                            cout<<"There is no enemy in that number."<<endl;
                            isManaEnough = 0;

                        }
                                        
                        if(isManaEnough == 1)
                        {
                            flag = 1;
                        }

                        flag2 = 1;
                    }

                    for(int j{0}; j<10; j++)
                    {

                        if(whichEnemy == ThereIsAKingsGuardInThisLoc[j])
                        {
                            if(ThereIsAKingsGuardInThisLoc[j] != 0)
                            {
                                isManaEnough = (player).SpecialAttack(enemyKg[j], rand());
                            }

                            else
                            {
                                cout<<"There is no enemy in that number."<<endl;
                                isManaEnough = 0;
                            }
                                            
                            if(isManaEnough == 1)
                            {
                                flag = 1;
                            }

                            flag2 = 1;

                        }
                    }


                    if(flag2 == 0)
                    {
                        cout<<"Please choose an existing enemy."<<endl;
                    }

                    flag2 = 0;

                }

                else if(playersChoice == 3)//player choosed use pot
                {
                    if((player).getPots() >= 1)
                    {
                        (player).usePot();
                    }

                    else
                    {
                        cout<<"You have no healing potion!"<<endl;
                    }
                }

                else if(playersChoice == 4)//player choosed print your stats
                {
                    printPlayersStats(player);
                }

                else if(playersChoice == 5)//player choosed print enemy stats
                {
                    if(isEnemy1Alive)
                    {
                        printEnemyStats(enemy1);        
                    }

                    for(int j{0}; j<10; j++)
                    {

                        if(ThereIsAKingsGuardInThisLoc[j] != 0)
                        {      
                            printEnemyStats(enemyKg[j]);  
                        }
                    }
                                    
                }



                if(flag == 1)
                    break;
                


            }



            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }

            for(int j{0}; j<10; j++)
            {

                if(ThereIsAKingsGuardInThisLoc[j] != 0)
                {      
                    if((enemyKg[j]).getHealth() <= 0)
                    {
                        cout<<endl<<(enemyKg[j]).getType()<<" is Dead!"<<endl;
                        delete &enemyKg[j];
                        ThereIsAKingsGuardInThisLoc[j] = 0;
                        enemyCnt--;                   
                        cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                        guardDown = 1;
                    }
                }
            }




            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}

            if(guardDown == 1 && isEnemy1Alive)
            {
                (enemy1).SpecialAttack(player, rand(), rand());

                ThereIsAKingsGuardInThisLoc[i] = i+2;

                guardDown = 0;
                enemyCnt++;
                i++;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy1).StandardAttack(player, rand());

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }

            for(int j{0}; j<10; j++)
            {
                
                if(GuardSpecialCnt[j] == 4)
                {
                    (enemyKg[j]).SpecialAttack(player);

                    GuardSpecialCnt[j] = 0;
                }

                else
                {
                    if(ThereIsAKingsGuardInThisLoc[j] != 0)
                    {
                        (enemyKg[j]).StandardAttack(player, rand());

                        GuardSpecialCnt[j]++;

                        if((player).getHealth() <= 0)
                        {
                            delete &player;
                            heroDied = 1;
                            breakk = 1;
                            break;
                        }
                    }
                }


            }

        }

        if(breakk == 1)
            break;




    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }
}

template <class T>

int ClericCombatKingFight(TheKing &enemy1, T &player)
{
    enemyCnt = 2;

    int isEnemy1Alive = 1;

    int guardDown{0};

    KingsGuard *enemyKg = new KingsGuard[10];
    vector <int> ThereIsAKingsGuardInThisLoc(10, 0);
    vector <int> GuardSpecialCnt(10, 0);


    int i{1}, flag2{0};

    ThereIsAKingsGuardInThisLoc[0] = 2;



    while(1)
    {

        int breakk{0};


        if(enemyCnt == 0)
        {
            cout<<endl<<endl<<"All Enemies Died!"<<endl;
            break;
        }

        else
        {
            
            srand(time(NULL));

            cout<<endl<<endl<<"~ YOUR TURN ~";

            int DidPlayerAttacked{0};

            while(1)
            {

                int flag=0;

                int playersChoice = CombatOptions();

                if(playersChoice == 1)//player choosed standard attack
                {
                    int whichEnemy;

                    cout<<"Which enemy do you want to attack?"<<endl;

                    if(isEnemy1Alive){cout<<(enemy1).getType()<<"(1)"<<endl;}

                    for(int j{0}; j<10; j++)
                    {
                        if(ThereIsAKingsGuardInThisLoc[j] != 0){cout<<(enemyKg[j]).getType()<<"("<<ThereIsAKingsGuardInThisLoc[j]<<")"<<endl;}
                    }

                    cin>>whichEnemy;


                    if(whichEnemy == 1)
                    {

                        if(isEnemy1Alive)
                        {
                            (player).StandardAttack(enemy1, rand());
                            flag = 1;
                                            
                        }

                        else
                        {
                            cout<<"There is no enemy in that number."<<endl;
                                            
                        }

                        flag2 = 1;
                    }

                    for(int j{0}; j<10; j++)
                    {

                        if(whichEnemy == ThereIsAKingsGuardInThisLoc[j])
                        {

                            if(ThereIsAKingsGuardInThisLoc[j] != 0)
                            {
                                (player).StandardAttack(enemyKg[j], rand());
                                flag = 1;
                                                
                            }

                            else
                            {
                                cout<<"There is no enemy in that number."<<endl;
                                                
                            }

                            flag2 = 1;
                        }

                    }


                    if(flag2 == 0)
                    {
                        cout<<"Please choose an existing enemy."<<endl;
                    }

                    flag2 = 0;

        
                }

                else if(playersChoice == 2)//player choosed special attack
                {
                    int isManaEnough;

                    isManaEnough = (player).SpecialAttack(enemy1, rand());
                
                                        
                    if(isManaEnough == 1)
                    {
                        flag = 1;
                    }

                    
                }

                else if(playersChoice == 3)//player choosed use pot
                {
                    if((player).getPots() >= 1)
                    {
                        (player).usePot();
                    }

                    else
                    {
                        cout<<"You have no healing potion!"<<endl;
                    }
                }

                else if(playersChoice == 4)//player choosed print your stats
                {
                    printPlayersStats(player);
                }

                else if(playersChoice == 5)//player choosed print enemy stats
                {
                    if(isEnemy1Alive)
                    {
                        printEnemyStats(enemy1);        
                    }

                    for(int j{0}; j<10; j++)
                    {

                        if(ThereIsAKingsGuardInThisLoc[j] != 0)
                        {      
                            printEnemyStats(enemyKg[j]);  
                        }
                    }
                                    
                }



                if(flag == 1)
                    break;
                


            }



            //is enemies dead check


            if(isEnemy1Alive)
            {
                if((enemy1).getHealth() <= 0)
                {
                    cout<<endl<<(enemy1).getType()<<" is Dead!"<<endl;
                    delete &enemy1;
                    isEnemy1Alive = 0;
                    enemyCnt--;                   
                    cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                }
            }

            for(int j{0}; j<10; j++)
            {

                if(ThereIsAKingsGuardInThisLoc[j] != 0)
                {      
                    if((enemyKg[j]).getHealth() <= 0)
                    {
                        cout<<endl<<(enemyKg[j]).getType()<<" is Dead!"<<endl;
                        delete &enemyKg[j];
                        ThereIsAKingsGuardInThisLoc[j] = 0;
                        enemyCnt--;                   
                        cout<<"("<<enemyDiedGetMyCoins(player)<<" COINS)"<<endl;
                        guardDown = 1;
                    }
                }
            }




            if(enemyCnt > 0){cout<<endl<<endl<<"~ ENEMY TURN ~"<<endl;}

            if(guardDown == 1 && isEnemy1Alive)
            {
                (enemy1).SpecialAttack(player, rand(), rand());

                ThereIsAKingsGuardInThisLoc[i] = i+2;

                guardDown = 0;
                enemyCnt++;
                i++;
            }

            else
            {
                if(isEnemy1Alive)
                {
                    (enemy1).StandardAttack(player, rand());

                    if((player).getHealth() <= 0)
                    {
                        delete &player;
                        heroDied = 1;
                        break;
                    }
                }
            }

            for(int j{0}; j<10; j++)
            {
                
                if(GuardSpecialCnt[j] == 4)
                {
                    (enemyKg[j]).SpecialAttack(player);

                    GuardSpecialCnt[j] = 0;
                }

                else
                {
                    if(ThereIsAKingsGuardInThisLoc[j] != 0)
                    {
                        (enemyKg[j]).StandardAttack(player, rand());

                        GuardSpecialCnt[j]++;

                        if((player).getHealth() <= 0)
                        {
                            delete &player;
                            heroDied = 1;
                            breakk = 1;
                            break;
                        }
                    }
                }


            }

        }

        if(breakk == 1)
            break;
    }

    if(heroDied == 1)
    {
        return -1;
    }

    else
    {
        return 1;
    }
}


template <class T> 

void PlayTheGame(int ChoiceFromStory, int isPlayerAlive, T &Player)
{
        tellTheStory(Player);

        Bandit *enemyB1 = new Bandit;
        Bandit *enemyB2 = new Bandit;

        isPlayerAlive = Combat(*enemyB1, *enemyB2, Player);

        if(isPlayerAlive == -1)
            exit(0);

        ChoiceFromStory = tellTheStory(Player);

        if(ChoiceFromStory == 1)//sneak
        {
            cout<<endl<<"You did it quietly. It took a while but you came to the tent."<<endl;
        }

        else if(ChoiceFromStory == 2)//run
        {
            cout<<endl<<"You run towards the tent and you almost made it but a bandits wolf heared you and started to bark. Two bandits woke up and drew their weapons!"<<endl;

            Bandit *enemyB1 = new Bandit;
            Bandit *enemyB2 = new Bandit;
            Wolf *enemyW = new Wolf;

            isPlayerAlive = Combat(*enemyB1, *enemyB2, *enemyW, Player);

            if(isPlayerAlive == -1)
                exit(0);

            cout<<endl<<"After this fight you are finally came to the tent."<<endl;
        }

        tellTheStory(Player);

        Dragon *enemyD = new Dragon;

        isPlayerAlive = CombatDragonFight1(*enemyD, Player);//dragon flees in fight. will be come again (ThiefCombat(*enemyD, *Player))

        if(isPlayerAlive == -1)
            exit(0);

        cout<<endl<<"After fight you saw that goblins are plundering the camp."<<"They may have something you need. So you attacked them."<<endl;

        daggerGoblin *enemyG1 = new daggerGoblin;
        daggerGoblin *enemyG2 = new daggerGoblin;
        spearGoblin *enemySam = new spearGoblin;

        isPlayerAlive = Combat(*enemyG1, *enemyG2, *enemySam, Player);

        if(isPlayerAlive == -1)
            exit(0);


        ChoiceFromStory = tellTheStory(Player);

        if(ChoiceFromStory == 1)//enter the cave
        {
            cout<<endl<<"You entered the cave bravely. It's almost pitch black."<<endl<<"But a corridor has a weak light. You are following that way."<<endl;
            cout<<"You are passing though more dead bodies, some of them became skeletons already!"<<endl<<"You get closer and realized the light source is the sunlight coming form a small crack and it hits to gold coins on the floor."<<endl;
            cout<<"And you see the owner of the golds, it is sleeping near them. The Dragon from earlier."<<endl<<"It's the time of round two!"<<endl;

            isPlayerAlive = CombatDragonFight2(*enemyD, Player);;

            if(isPlayerAlive == -1)
                exit(0);

            (Player).addCoin(300);

            cout<<endl<<"You took the golds. There are 300 coins."<<endl<<"You wanted to exit without lingering."<<endl;
            cout<<"On your way out, some skeletons starts to move."<<endl<<" - Get out of our masters way and stop searching her!"<<endl;
            cout<<"Says a skeleton and runs through you."<<endl;

            bowSkeleton *enemyS1 = new bowSkeleton;
            bowSkeleton *enemyS2 = new bowSkeleton;
            whipSkeleton *enemyS3 = new whipSkeleton;

            isPlayerAlive = Combat(*enemyS1, *enemyS2, *enemyS3, Player);

            if(isPlayerAlive == -1)
                exit(0);

            cout<<endl<<"You get out of the cave right after this fight. And continue your way to the merchant."<<endl;

        }

        else if(ChoiceFromStory == 2)//do not enter the cave
        {
            cout<<endl<<"You tought it would not worth it. So you continued your way to shop directly."<<endl;
        }

        tellTheStory(Player);

        Bandit *enemyBa1 = new Bandit;
        Bandit *enemyBa2 = new Bandit;

        isPlayerAlive = Combat(*enemyBa1, *enemyBa2, Player);

        if(isPlayerAlive == -1)
            exit(0);


        ChoiceFromStory = tellTheStory(Player);

        if(ChoiceFromStory == 1)//enter and attack them
        {
            cout<<endl<<"You bumped into the room"<<endl<<"Before you attack them, you saw their teeths. They are vampires!"<<endl;

            Vampire *enemyV1 = new Vampire;
            Vampire *enemyV2 = new Vampire;

            isPlayerAlive = CombatVampireFight(*enemyV1, *enemyV2, Player);

            if(isPlayerAlive == -1)
                exit(0);

        }

        else if(ChoiceFromStory == 2)//wait and observe more
        {
            cout<<endl<<"You waited a little more."<<endl<<"One of them came out from the backdoor. And came back with a nude man."<<endl;
            cout<<"Another one stops singing and snatched the man from his neck. He was like he is biting him."<<endl<<"Nude man opens his eyes. And they were yellow, like other guys inside."<<endl;
            cout<<"They must be vampires! You got in immediately."<<endl;


            Vampire *enemyV1 = new Vampire;
            Vampire *enemyV2 = new Vampire;
            Vampire *enemyV3 = new Vampire;

            isPlayerAlive = CombatVampireFight(*enemyV1, *enemyV2, *enemyV3, Player);

            if(isPlayerAlive == -1)
                exit(0);
        }

        ChoiceFromStory = tellTheStory(Player);

        if(ChoiceFromStory == 1)//answered riddle windmill
        {
            cout<<endl<<" - Then say your answer aloud."<<endl<<"Says Harold. Windmill's meaning in this language is TESO."<<endl;
            cout<<"You said TESO to statue."<<endl<<"Statue started to move. But not in the good way. It turns to a Golem!"<<endl;

            Golem *enemyG = new Golem;

            isPlayerAlive = CombatGolemFight(*enemyG, Player);

            if(isPlayerAlive == -1)
                exit(0);

            cout<<endl<<"Golem shattered to tiny pieces."<<endl<<"A map catches to your eye inside the pieces."<<endl<<"The map locates to a island in a lake."<<endl;

        }

        else if(ChoiceFromStory == 2)//answered riddle lake
        {
            cout<<endl<<" - Then say your answer aloud."<<endl<<"Says Harold. lake's meaning in this language is SFENG."<<endl;
            cout<<"You said SFENG to statue."<<endl<<"Statue started to move. And statue become shattered to tiny pieces."<<endl;
            cout<<"A map catches to your eye inside the pieces."<<endl<<"The map locates to a island in a lake."<<endl;
        }

        else if(ChoiceFromStory == 3)//answered riddle piss
        {
            cout<<endl<<" - Then say your answer aloud."<<endl<<"Says Harold. Piss's meaning in this language is ZSTI."<<endl;
            cout<<"You said ZSTI to statue."<<endl<<"Statue started to move. But not in the good way. It turns to a Golem!"<<endl;

            Golem *enemyG = new Golem;

            isPlayerAlive = CombatGolemFight(*enemyG, Player);

            if(isPlayerAlive == -1)
                exit(0);

            cout<<endl<<"Golem shattered to tiny pieces."<<endl<<"A map catches to your eye inside the pieces."<<endl<<"The map locates to a island in a lake."<<endl;

        }

        else if(ChoiceFromStory == 4)//answered riddle a king
        {
            cout<<endl<<" - Then say your answer aloud."<<endl<<"Says Harold. King's meaning in this language is VONGA."<<endl;
            cout<<"You said VONGA to statue."<<endl<<"Statue started to move. But not in the good way. It turns to a Golem!"<<endl;

            Golem *enemyG = new Golem;

            isPlayerAlive = CombatGolemFight(*enemyG, Player);

            if(isPlayerAlive == -1)
                exit(0);

            cout<<endl<<"Golem shattered to tiny pieces."<<endl<<"A map catches to your eye inside the pieces."<<endl<<"The map locates to a island in a lake."<<endl;

        }

        tellTheStory(Player);

        Shark *enemySh1 = new Shark;
        Shark *enemySh2 = new Shark;

        isPlayerAlive = Combat(*enemySh1, *enemySh2, Player);

        if(isPlayerAlive == -1)
            exit(0);


        tellTheStory(Player);

        Shark *enemySh3 = new Shark;
        Shark *enemySh4 = new Shark;
        Shark *enemySh5 = new Shark;

        isPlayerAlive = CombatSharkFightWithSirenDebuff(*enemySh3, *enemySh4, *enemySh5, Player);

        if(isPlayerAlive == -1)
            exit(0);

        
        tellTheStory(Player);

        Siren *enemySi1 = new Siren;
        Siren *enemySi2 = new Siren;
        Siren *enemySi3 = new Siren;

        isPlayerAlive = CombatSirenFight(*enemySi1, *enemySi2, *enemySi3, Player);

        if(isPlayerAlive == -1)
            exit(0);

        tellTheStory(Player);

        Witch *enemyW = new Witch;

        if(chosenClass == 5)
        {
            isPlayerAlive = ClericCombatWitchFight(*enemyW, Player);
        }

        else
        {
            isPlayerAlive = CombatWitchFight(*enemyW, Player);
        }

        if(isPlayerAlive == -1)
            exit(0);

        tellTheStory(Player);

        KingsGuard *enemyKG1 = new KingsGuard;
        KingsGuard *enemyKG2 = new KingsGuard;

        isPlayerAlive = CombatKingsGuardFight(*enemyKG1, *enemyKG2, Player);

        if(isPlayerAlive == -1)
            exit(0);

        cout<<endl<<"King and the other guard did nothing during the fight."<<endl<<"But The King got angrier. And while taking off his cloak, he said:"<<endl;
        cout<<" - That's enough! Kneel before me and beg for mercy. Then maybe I will forgive you."<<endl<<"Will you kneel? (1 for yes, 2 for no)"<<endl;

        int kneel;

        while(1)
        {
            cin>>kneel;

            if(kneel == 2)
            {
                cout<<" - Now we will see, how I trained you."<<endl<<"And he is doing his hand like he is calling you to make the first move."<<endl;

                TheKing *enemyK = new TheKing;

                if(chosenClass == 5)
                {
                    isPlayerAlive = ClericCombatKingFight(*enemyK, *Player);
                }

                else
                {
                    isPlayerAlive = CombatKingFight(*enemyK, *Player);
                }

                if(isPlayerAlive == -1)
                    exit(0);
                
                requiredStoryPart =14;

                tellTheStory(*Player);

                break;
            }

            else if(kneel == 1)
            {
                requiredStoryPart =15;

                tellTheStory(*Player);

                break;
            }

            else
            {
                cout<<"Will you kneel? (1 for yes, 2 for no)"<<endl;
            }

        }

}



