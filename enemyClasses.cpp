#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include "enemyClasses.h"

using namespace std;


void Enemy :: addHealth(int HP)
{
    Health = Health + HP;
}

void Enemy :: loseHealth(int HP)
{
    Health = Health - HP;
}

int Enemy :: getHealth()
{
    return Health;
}

int Enemy :: getDroppedCoinAmount()
{
    
    srand(time(0));

    return (rand() % MaxCoinDrop);
}

string Enemy :: getLightOrDark()
{
    return lightOrDark;
}

string Enemy :: getType()
{
    return type;
}

void Enemy :: setType(string Type)
{
    type = Type;
}

int Enemy :: getMaxHealth()
{
    return maxHealth;
}








Bandit :: Bandit()
{
    lightOrDark = "light";
    Health = 5;
    maxHealth = 5;
    type = "Bandit";
}

void Bandit :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand == 0)//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Bandit tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation attack will be successful
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation enemy deals extra critical damage to hero
        {
            Damage = (rand % Weapon.getEnemyMaxDamage()) + (Weapon.getEnemyMaxDamage() / 5);

            cout<<"CRITICAL HIT! Bandit, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        else//in this situation enemy cannot deal extra critical damage to hero
        {
            Damage = rand % Weapon.getEnemyMaxDamage();

            cout<<"Bandit, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Bandit tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }
    

    player.loseHealth(Damage);
}



Goblin :: Goblin()
{
    lightOrDark = "light";
    Health = 7;
    maxHealth = 7;
    type = "Goblin";
}

void daggerGoblin :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand == 0)//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The goblin with a dagger tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation attack will be successful
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation enemy deals extra critical damage to hero
        {
            Damage = (rand % Weapon.getEnemyMaxDamage()) + (Weapon.getEnemyMaxDamage() / 5);

            cout<<"CRITICAL HIT! The goblin with a dagger, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        else//in this situation enemy cannot deal extra critical damage to hero
        {
            Damage = rand % Weapon.getEnemyMaxDamage();

            cout<<"The goblin with a dagger, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The goblin with a dagger tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}

void spearGoblin :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand == 0)//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The goblin with a spear tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation attack will be successful
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation enemy deals extra critical damage to hero
        {
            Damage = (rand % Weapon.getEnemyMaxDamage()) + (Weapon.getEnemyMaxDamage() / 5);

            cout<<"CRITICAL HIT! The goblin with a spear, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        else//in this situation enemy cannot deal extra critical damage to hero
        {
            Damage = rand % Weapon.getEnemyMaxDamage();

            cout<<"The goblin with a spear, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The goblin with a spear tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}



Skeleton :: Skeleton()
{
    lightOrDark = "dark";
    Health = 5;
    maxHealth = 5;
    type = "Skeleton";
}

void bowSkeleton :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand == 0)//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The skeleton with a bow tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation attack will be successful
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation enemy deals extra critical damage to hero
        {
            Damage = (rand % Weapon.getEnemyMaxDamage()) + (Weapon.getEnemyMaxDamage() / 5);

            cout<<"CRITICAL HIT! The skeleton with a bow, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        else//in this situation enemy cannot deal extra critical damage to hero
        {
            Damage = rand % Weapon.getEnemyMaxDamage();

            cout<<"The skeleton with a bow, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The skeleton with a bow tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}

void whipSkeleton :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand == 0)//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The skeleton with a whip tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation attack will be successful
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation enemy deals extra critical damage to hero
        {
            Damage = (rand % Weapon.getEnemyMaxDamage()) + (Weapon.getEnemyMaxDamage() / 5);

            cout<<"CRITICAL HIT! The skeleton with a whip, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        else//in this situation enemy cannot deal extra critical damage to hero
        {
            Damage = rand % Weapon.getEnemyMaxDamage();

            cout<<"The skeleton with a whip, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The skeleton with a whip tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}



Wolf :: Wolf()
{
    lightOrDark = "light";
    Health = 6;
    maxHealth = 6;
    type = "Wolf";
}

void Wolf :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand % 100 < 40)//in this situation attack will be successful (40 = hit chance)
    {
        Damage = 12;

        cout<<"Wolf, attacked with a "<<Damage<<" damage standard attack."<<endl;
    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Wolf tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}



Shark :: Shark()
{
    lightOrDark = "light";
    Health = 10;
    maxHealth = 10;
    type = "Shark";
}

void Shark :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand % 100 < 35)//in this situation attack will be successful (40 = hit chance)
    {
        Damage = 11;

        cout<<"Shark, attacked with a "<<Damage<<" damage standard attack."<<endl;
    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Shark tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}








Golem :: Golem()
{
    lightOrDark = "dark";
    Health = 50;
    maxHealth = 50;
    type = "Golem";
}

void Golem :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand % 100 < 50)//in this situation attack will be successful (50 = hit chance)
    {
        Damage = (rand % 19) + 1;

        cout<<"Golem, attacked with a "<<Damage<<" damage standard attack."<<endl;
    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Golem tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}

void Golem :: SpecialAttack(Hero &player)//will executed every 4 turns
{
    int random;
    srand(time(NULL));

    random = rand();
    StandardAttack(player, random);

    GolemDebuffFlag = 1;

    cout<<"Golem performed its special after this strike. It is getting harder! Your next attack to it will be less effective!"<<endl;
}




Vampire :: Vampire()
{
    lightOrDark = "dark";
    Health = 20;
    maxHealth = 20;
    type = "Vampire";
}

void Vampire :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand % 100 < 60)//in this situation attack will be successful (60 = hit chance)
    {
        Damage = (rand % 24) + 1;

        cout<<"Vampire, attacked with a "<<Damage<<" damage standard attack."<<endl;
    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Vampire tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}

void Vampire :: StandardAttackAfterBleedDamage(Hero &player, int rand)
{
    int Damage;

    if(rand % 100 < 60)//in this situation attack will be successful (60 = hit chance)
    {
        Damage = 20;

        cout<<"Vampire, attacked with a "<<Damage<<" damage standard attack."<<endl;
    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Vampire tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);

    //after standard attack hero gets another damage (bleeding)

    cout<<"You also take -5 damage because of bleeding."<<endl;

    player.loseHealth(5);
}

void Vampire :: SpecialAttack(Hero &player)//will executed every 7 turns
{
    int random;
    srand(time(NULL));

    random = rand();
    StandardAttack(player, random);

    VampireDebuffFlag = 1;

    cout<<"Vampire's this attack made you bleed. You will lose HP while you are bleeding!"<<endl;
}





Siren :: Siren()
{
    lightOrDark = "light";
    Health = 25;
    maxHealth = 25;
    type = "Siren";
}

void Siren :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand % 100 < 70)//in this situation attack will be successful (70 = hit chance)
    {
        Damage = (rand % 19) + 1;

        cout<<"Siren, attacked with a "<<Damage<<" damage standard attack."<<endl;
    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Siren tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}

void Siren :: SpecialAttack(Hero &player)//will executed once in 3rd turn of fight
{
    SirenDebuffFlag = 1;

    cout<<"Siren started to sing a hypnotizing song. Your damage reduced -5 till you kill last enemy in this fight."<<endl;
}




KingsGuard :: KingsGuard()
{
    lightOrDark = "light";
    Health = 35;
    maxHealth = 35;
    type = "Kings Guard";
}

void KingsGuard :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand == 0)//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Kings Guard tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation attack will be successful
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation enemy deals extra critical damage to hero
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<"CRITICAL HIT! Kings Guard, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        else//in this situation enemy cannot deal extra critical damage to hero
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<"Kings Guard, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Kings Guard tried to do a standard attack, but missed his attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);

}

void KingsGuard :: SpecialAttack(Hero &player)//will executed every 4 turns
{
    if(Health <= (maxHealth - 15))
    {
        addHealth(15);

        cout<<"Kings Guard started to touch his glowing neckless and restored his 15HP."<<endl;
    }

    else if(Health >= (maxHealth - 10) && Health != maxHealth)
    {
        Health = maxHealth;

        cout<<"Kings Guard started to touch his glowing neckless and restored his full health."<<endl;
    }

    else
    {
        cout<<"Kings Guard started to touch his glowing neckless but his health was maxed out already so nothing happened."<<endl;
    }

}











Dragon :: Dragon()
{
    lightOrDark = "light boss";
    Health = 100;
    maxHealth = 100;
    type = "Dragon";
}

void Dragon :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand % 100 < 40)//in this situation attack will be successful (40 = hit chance)
    {
        Damage = (rand % 39) + 1;

        cout<<"Dragon, attacked with a "<<Damage<<" damage standard attack."<<endl;
    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Dragon tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);
}

void Dragon :: SpecialAttack(Hero &player, int random)//will executed every 3 turns
{
    cout<<"Dragon breathes fire. Fire damage hits 15 damage to you and it have probabilty to stun you!"<<endl;

    player.loseHealth(15);

    srand(time(0));

    if(rand() % 100 < 50)//in this situation hero gets stunned (50 = stun chance)
    {
        cout<<"And unfortunately you get stunned from dragons fire breath. Dragon doesn't wait for you to stop burning and performs another attack with its claw!"<<endl;

        random = rand();
        StandardAttack(player ,random);

    }

    else//in this situation hero will not stunned
    {
        cout<<"But you didn't get stunned from dragons fire breath this time. What a Chance!"<<endl;
    }

}




Witch :: Witch()
{
    lightOrDark = "dark boss";
    Health = 60;
    maxHealth = 60;
    type = "Witch";
}

void Witch :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand == 0)//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Witch tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation attack will be successful
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation enemy deals extra critical damage to hero
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<"CRITICAL HIT! Witch, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        else//in this situation enemy cannot deal extra critical damage to hero
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<"Witch, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"Witch tried to do a standard attack, but missed his attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);

}






TheKing :: TheKing()
{
    lightOrDark = "light boss";
    Health = 90;
    maxHealth = 90;
    type = "The King";
}

void TheKing :: StandardAttack(Hero &player, int rand)
{
    int Damage;

    if(rand == 0)//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The skeleton with a bow tried to do a standard attack, but missed its attack. No Damage dealt to you."<<endl;        
    }

    else if(rand % 100 < Weapon.getHitChance())//in this situation attack will be successful
    {

        if(rand % 100 < Weapon.getCritChance())//in this situation enemy deals extra critical damage to hero
        {
            Damage = (rand % Weapon.getMaxDamage()) + (Weapon.getMaxDamage() / 5);

            cout<<"CRITICAL HIT! The King, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

        else//in this situation enemy cannot deal extra critical damage to hero
        {
            Damage = rand % Weapon.getMaxDamage();

            cout<<"The King, attacked with a "<<Damage<<" damage standard attack."<<endl;
        }

    }

    else//in this situation enemy couldnt hit hero
    {
        Damage = 0;

        cout<<"The King tried to do a standard attack, but missed his attack. No Damage dealt to you."<<endl;
    }

    player.loseHealth(Damage);

}

void TheKing :: SpecialAttack(Hero &player, int random1, int random2)//will executed after his guard dies
{
    
    cout<<endl<<"The King become mad to his guards death so started to yell and turn around with his giant Greatsword. Its a dangerous attack which may hit you multiple times."<<endl<<endl<<"First spin of the king:"<<endl;

    StandardAttack(player, random1);

    cout<<endl<<"Second spin of the kings strike:"<<endl;

    StandardAttack(player, random2);

    cout<<endl<<"And after all these yellings during his attack a guard hears and comes to support his King."<<endl;

}














