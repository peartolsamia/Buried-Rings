#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include "heroClasses.h"

using namespace std;


void Hero :: setName(string Name)
{
    this->Name = Name;
}

string Hero :: getName()
{
    return Name;
}

    
void Hero :: addHealth(int HP)
{
    Health = Health + HP;
}

void Hero :: loseHealth(int HP)
{
    Health = Health - HP;
}

int Hero :: getHealth()
{
    return Health;
}

void Hero :: upgradeMaxHealth(int Coins)
{
    int upgradeTimes = Coins/100;//a variable that says how many times +5hp upgrade can player get

    if(upgradeTimes >= 1)
    {
        maxHealth = maxHealth + (10*upgradeTimes);

        cout<<"Maximum Health increased "<<upgradeTimes*10<<" HP. Now its "<<maxHealth<<" HP! "<<endl;

        loseCoin(Coins);
    }

    else
    {
        cout<<"1 HP level up = 100 coins. Your coins are not enough to upgrade maximum HP"<<endl;
    }


}

int Hero :: getMaxHealth()
{
    return maxHealth;
}
    
void Hero :: buyPots(int Coins)
{
    int numOfPotsCanBuy = Coins/20;//a variable that says how many pots can player get

    if(numOfPotsCanBuy >= 1)
    {
        HealingPotCnt = HealingPotCnt + numOfPotsCanBuy;

        cout<<numOfPotsCanBuy<<" potions added to inventory! You have "<<HealingPotCnt<<" Healing Pots in total."<<endl;

        loseCoin(Coins);
    }

    else
    {
        cout<<"1 Healing Potion = 20 coins. Your coins are not enough to buy one"<<endl;
    }
}

void Hero :: usePot()
{
    if(Health <= (maxHealth - 10))
    {
        Health = Health + 10;//a healing pot gives +10 hp

        HealingPotCnt--; 

        cout<<"Healing potion used! HP increased."<<endl;
    }

    else if(Health >= (maxHealth - 10) && Health != maxHealth)
    {
        Health = maxHealth;

        HealingPotCnt--; 

        cout<<"Healing potion used! HP increased."<<endl;
    }

    else
    {
        cout<<"Your HP is full already!"<<endl;
    }
    

}

int Hero :: getPots()
{
    return HealingPotCnt;
}

    
void Hero :: addCoin(int Coins)
{
    TotalCoins = TotalCoins + Coins;
}

void Hero :: loseCoin(int Coins)
{
    TotalCoins = TotalCoins - Coins;
}

int Hero :: getCoins()
{
    return TotalCoins;
}

void Hero :: increaseMana()
{
    ManaCnt++;
}

int Hero :: getMana()
{
    return ManaCnt;
}


void Hero :: shop()
{

    int option{0};
    string exit = "no";
    int coins;

    cout<<"Welcome to shop, you can buy Healing Potions or upgrade your Maximum Health"<<endl;
    
    while(option != 3)
    {
        cout<<"1 for buy Pots || 2 for increase Max HP || 3 for exit"<<endl<<"-->";
        cin>>option;

        if(option == 1)
        {
            cout<<"How many coins do you spent to buy healing pots? (20 coin = 1 potion). "<<"You have "<<TotalCoins<<" coins."<<endl<<"-->";
            cin>>coins;

            if(coins <= TotalCoins)
            {
                buyPots(coins);
            }

            else
            {
                cout<<"You dont have that much coins. You have "<<TotalCoins<<" coins."<<endl;
            }


            while(1)
            {

                cout<<"Do you want to leave the shop? (yes/no)"<<endl<<"-->";
                cin>>exit;                

                if(exit == "yes")
                {
                    option = 3;
                    break;
                }

                else if( exit == "no")
                {
                    break;
                }

                else
                {
                    cout<<"Answers will accepted only in yes or no format."<<endl;
                }

            }


        }

        else if(option == 2)
        {
            cout<<"How many coins do you spent to upgrade your Max HP?(100 coin = +10 max HP)"<<"You have "<<TotalCoins<<" coins."<<endl<<"-->";
            cin>>coins;

            if(coins <= TotalCoins)
            {
                upgradeMaxHealth(coins);
            }

            else
            {
                cout<<"You dont have that much coins. You have "<<TotalCoins<<" coins."<<endl;
            }


            while(1)
            {

                cout<<"Do you want to leave the shop? (yes/no)"<<endl<<"-->";
                cin>>exit;                

                if(exit == "yes")
                {
                    option = 3;
                    break;
                }

                else if( exit == "no")
                {
                    break;
                }

                else
                {
                    cout<<"Answers will accepted only in yes or no format."<<endl;
                }

            }
        }

        if(option == 3)
        {
            cout<<"Thanks For Choosing Harold The Merchant. Good Luck in Combat!"<<endl;
        }

        else
        {
            cout<<"Answers will accepted only in 1, 2 or 3 format."<<endl;
        }

    }


}




Warrior :: Warrior()
{
    maxHealth = 150;
    Health = 150;
    HealingPotCnt = 5;
}

void Warrior :: StandardAttack(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack."<<endl;
            
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        if(ManaCnt < 6)
        {
            increaseMana();
        }

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;
    }

    foe.loseHealth(Damage);
    

}

void Warrior :: StandardAttackWithGolemDebuff(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack. But Golem was hard as a rock, thus golem tolerate the half of damage."<<endl;
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack. But Golem was hard as a rock thus golem tolerate the half of damage."<<endl;
        }

        if(ManaCnt < 6)
        {
            increaseMana();
        }

        removeGolemDebuff();//if hero can perform a succesful hit debuff goes

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target. Golem is still hard."<<endl;
    }

    foe.loseHealth(Damage/2);
}

void Warrior :: StandardAttackWithSirenDebuff(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack. But Sirens song is still effecting you, thus your hit effected -5 less damage."<<endl;
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack. But Sirens song is still effecting you, thus your hit effected -5 less damage."<<endl;
        }

        if(ManaCnt < 6)
        {
            increaseMana();
        }

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target. Golem is still hard."<<endl;
    }

    if (Damage >= 5)
    {
        foe.loseHealth(Damage-5); 
    }

    else if(Damage <= 5 && Damage != 0)
    {
        foe.loseHealth(0);

        cout<<endl<<"Because of the debuff from Siren, You couldn't deal any damage."<<endl;
    }
}

int Warrior :: SpecialAttack(Enemy &foe1, Enemy &foe2, Enemy &foe3)//attacks 3 enemies
{

    int Damage;

    srand(time(NULL));

    if(ManaCnt == 6)
    {
        cout<<endl<<"You roared and your worrior rage turned you more aggressive. You attacked 3 different foes in a row."<<endl<<endl<<"First Enemy:";

        
        StandardAttack(foe1, rand());

        cout<<endl<<"Second Enemy:";

        
        StandardAttack(foe2, rand());

        cout<<endl<<"Third Enemy:";
        
        
        StandardAttack(foe3, rand());

        ManaCnt = 0;
        
        return 1;

    }


    else
    {
        cout<<endl<<"Not enough mana to perform special move."<<endl;

        return 0;
    }


}

int Warrior :: SpecialAttack(Enemy &foe1, Enemy &foe2)//attacks 2 enemies but hits one of them twice
{

    int Damage;

    srand(time(NULL));

    if(ManaCnt == 6)
    {

        cout<<"You roared and your worrior rage turned you more aggressive. You attacked 2 different foes in a row. But one of them will be attacked two times."<<endl<<endl<<"First Enemy:";


        StandardAttack(foe1, rand());

        cout<<endl<<"Second Enemy:";


        StandardAttack(foe2, rand());

        //selects randomly the enemy that will be attacked twice

        srand(time(0));

        if(rand()%2 == 0)
        {
            cout<<endl<<"You attacked again to first enemy:";

            
            StandardAttack(foe1, rand());
        }

        else
        {
            cout<<endl<<"You attacked again to second enemy:";
            
            StandardAttack(foe2, rand()); 
        }

        ManaCnt = 0;

        return 1;

    }

    else
    {
        cout<<endl<<"Not enough mana to perform special move."<<endl;

        return 0;
    }


}

int Warrior :: SpecialAttack(Enemy &foe1, int random)//attacks 1 enemy 3 times
{

    int Damage;
        
    srand(time(NULL));

    if(ManaCnt == 6)
    {
        cout<<endl<<"You roared and your worrior rage turned you more aggressive. You attacked an enemy but it will be attacked three times in a row."<<endl;

       
        StandardAttack(foe1, rand());

        
        StandardAttack(foe1, rand());

        
        StandardAttack(foe1, rand());

        ManaCnt = 0;

        return 1;

    }

    else
    {
        cout<<endl<<"Not enough mana to perform special move."<<endl;

        return 0;
    }
}





Thief :: Thief()
{
    maxHealth = 100;
    Health = 100;
    HealingPotCnt = 5;
}

void Thief :: StandardAttack(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack."<<endl;
            
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        if(ManaCnt < 2)
        {
            increaseMana();
        }

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;
    }

    foe.loseHealth(Damage);
}

void Thief :: StandardAttackWithGolemDebuff(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack. But Golem was hard as a rock, thus golem tolerate the half of damage."<<endl;
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack. But Golem was hard as a rock thus golem tolerate the half of damage."<<endl;
        }

        if(ManaCnt < 2)
        {
            increaseMana();
        }

        removeGolemDebuff();//if hero can perform a succesful hit debuff goes

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target. Golem is still hard."<<endl;
    }

    foe.loseHealth(Damage/2);
}

void Thief :: StandardAttackWithSirenDebuff(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack. But Sirens song is still effecting you, thus your hit effected -5 less damage."<<endl;
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack. But Sirens song is still effecting you, thus your hit effected -5 less damage."<<endl;
        }

        if(ManaCnt < 2)
        {
            increaseMana();
        }

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target. Golem is still hard."<<endl;
    }

    if (Damage >= 5)
    {
        foe.loseHealth(Damage-5); 
    }

    else if(Damage <= 5 && Damage != 0)
    {
        foe.loseHealth(0);

        cout<<endl<<"Because of the debuff from Siren, You couldn't deal any damage."<<endl;
    }
}

int Thief :: SpecialAttack(Enemy &foe, int rand)
{
    int Damage;

    if(ManaCnt == 2)
    {
        Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

        cout<<endl<<"You trusted yourself and swinged your weapon. You knew you will hit critical. Your attack dealt "<<Damage<<" damage to enemy."<<endl;

        foe.loseHealth(Damage);

        ManaCnt = 0;

        return 1;

    }

    else
    {
        cout<<endl<<"Not enough mana to perform special move."<<endl;

        return 0;
    }
}




Mage :: Mage()
{
    maxHealth = 100;
    Health = 100;
    HealingPotCnt = 5;
}

void Mage :: StandardAttack(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack."<<endl;
            
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        if(ManaCnt < 4)
        {
            increaseMana();
        }

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;
    }

    foe.loseHealth(Damage);
}

void Mage :: StandardAttackWithGolemDebuff(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack. But Golem was hard as a rock, thus golem tolerate the half of damage."<<endl;
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack. But Golem was hard as a rock thus golem tolerate the half of damage."<<endl;
        }

        if(ManaCnt < 4)
        {
            increaseMana();
        }

        removeGolemDebuff();//if hero can perform a succesful hit debuff goes

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target. Golem is still hard."<<endl;
    }

    foe.loseHealth(Damage/2);
}

void Mage :: StandardAttackWithSirenDebuff(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack. But Sirens song is still effecting you, thus your hit effected -5 less damage."<<endl;
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack. But Sirens song is still effecting you, thus your hit effected -5 less damage."<<endl;
        }

        if(ManaCnt < 4)
        {
            increaseMana();
        }

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target. Golem is still hard."<<endl;
    }

    if (Damage >= 5)
    {
        foe.loseHealth(Damage-5); 
    }

    else if(Damage <= 5 && Damage != 0)
    {
        foe.loseHealth(0);

        cout<<endl<<"Because of the debuff from Siren, You couldn't deal any damage."<<endl;
    }
}

int LightMage :: SpecialAttack(Enemy &foe, int random)
{
    srand(time(NULL));

    if(ManaCnt == 4)
    {
        if(foe.getLightOrDark() == "dark")//if its a dark mob, light mage hits damage with full health of enemy
        {
            foe.loseHealth(foe.getHealth());

            cout<<endl<<"You always hated who worships dark gods. You sacrificed target to light gods and killed it intantly!"<<endl;

            ManaCnt = 0;
        }

        else if(foe.getLightOrDark() == "light")//if its a light mob, light mage cannot hit any damage with special strike
        {
            cout<<endl<<"Target is immune to light spell"<<endl;
        }

        else if(foe.getLightOrDark() == "dark boss")//if its a dark boss, light mage strikes with two standard attack
        {
            cout<<endl<<"You always hated who worships dark gods. You wanted sacrifice target to light gods but it is powerful. You can deal 2 standard attack in a row instead."<<endl;


            StandardAttack(foe, rand());

            StandardAttack(foe, rand());

            ManaCnt = 0;
        }

        else if(foe.getLightOrDark() == "light boss")//if its a light boss, light mage cannot hit any damage with special strike
        {
            cout<<endl<<"Target is immune to light spell"<<endl;
        }

        else
        {
            cout<<endl<<"!!ERROR!!"<<endl;
        }

        return 1;

    }

    else
    {
        cout<<endl<<"Not enough mana to perform special move."<<endl;

        return 0;
    }


}

int DarkMage :: SpecialAttack(Enemy &foe, int random)
{
    srand(time(NULL));
    
    if(ManaCnt == 4)
    {

        if(foe.getLightOrDark() == "dark")
        {
            cout<<endl<<"Target is immune to dark spell"<<endl;
        }

        else if(foe.getLightOrDark() == "light")
        {
            foe.loseHealth(foe.getHealth());

            cout<<endl<<"You always hated who worships light gods. You sacrificed target to dark gods and killed it intantly!"<<endl;

            ManaCnt = 0;
        }

        else if(foe.getLightOrDark() == "dark boss")
        {
            cout<<endl<<"Target is immune to dark spell"<<endl;
        }

        else if(foe.getLightOrDark() == "light boss")
        {
            cout<<endl<<"You always hated who worships light gods. You wanted sacrifice target to dark gods but it is powerful. You can deal 2 standard attack in a row instead."<<endl;

    
            StandardAttack(foe, rand());

            StandardAttack(foe, rand());

            ManaCnt = 0;
        }

        else
        {
            cout<<endl<<"!!ERROR!!"<<endl;
        }

        return 1;

    }

    else
    {
        cout<<endl<<"Not enough mana to perform special move."<<endl;

        return 0;
    }


}




Cleric :: Cleric()
{
    maxHealth = 100;
    Health = 100;
    HealingPotCnt = 5;
}

void Cleric :: StandardAttack(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack."<<endl;
            
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        if(ManaCnt < 4)
        {
            increaseMana();
        }

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;
    }

    foe.loseHealth(Damage);
}

void Cleric :: StandardAttackWithGolemDebuff(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack. But Golem was hard as a rock, thus golem tolerate the half of damage."<<endl;
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack. But Golem was hard as a rock thus golem tolerate the half of damage."<<endl;
        }

        if(ManaCnt < 4)
        {
            increaseMana();
        }

        removeGolemDebuff();//if hero can perform a succesful hit debuff goes

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target. Golem is still hard."<<endl;
    }

    foe.loseHealth(Damage/2);
}

void Cleric :: StandardAttackWithSirenDebuff(Enemy &foe, int rand)
{
    int Damage;

    if(rand == 0)//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation hero hits the target
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation hero deals extra critical damage
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<endl<<"CRITICAL HIT! You attacked with a "<<Damage<<" damage standard attack. But Sirens song is still effecting you, thus your hit effected -5 less damage."<<endl;
        }

        else//in this situation hero cannot deal extra critical damage
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<endl<<"You attacked with a "<<Damage<<" damage standard attack. But Sirens song is still effecting you, thus your hit effected -5 less damage."<<endl;
        }

        if(ManaCnt < 4)
        {
            increaseMana();
        }

    }

    else//in this situation hero cannot hit the target
    {
        Damage = 0;

        cout<<endl<<"You have tried to do a standard attack, but missed your attack. No Damage dealt to the target. Golem is still hard."<<endl;
    }

    if (Damage >= 5)
    {
        foe.loseHealth(Damage-5); 
    }

    else if(Damage <= 5 && Damage != 0)
    {
        foe.loseHealth(0);

        cout<<endl<<"Because of the debuff from Siren, You couldn't deal any damage."<<endl;
    }
}

int Cleric :: SpecialAttack(Enemy &foe, int rand)
{
    int Damage;

    if(ManaCnt == 4)
    {
        cout<<endl<<"You prayed to old gods to heal you. They didn't refuse your request and they honored you with restoring your entire HP!"<<endl;

        addHealth(maxHealth - Health);//adds whole hp that cleric lost

        ManaCnt = 0;

        return 1;
    }

    else
    {
        cout<<endl<<"Not enough mana to perform special move."<<endl;

        return 0;
    }
}



