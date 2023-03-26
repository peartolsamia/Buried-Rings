#include <iostream>
#include <string>
#include "weaponClasses.h"

using namespace std;

void Weapon :: setMaxDamage(int MaxDamage)
{
    this->MaxDamage = MaxDamage;

}

int Weapon :: getMaxDamage()
{

    return MaxDamage;

}

int Weapon :: getEnemyMaxDamage()
{

    return enemyMaxDamage;

}

int Weapon :: getCritChance()
{

    return criticalChance;

}

int Weapon :: getHitChance()
{

    return hitChance;

}



Axe :: Axe()
{
    MaxDamage = 50;
    criticalChance = 50;
    hitChance = 50;
}

Dagger :: Dagger()
{
    MaxDamage = 30;
    enemyMaxDamage = 10;
    criticalChance = 25;
    hitChance = 85;
}

Wand :: Wand()
{
    MaxDamage = 30;
    criticalChance = 25;
    hitChance = 85;
}

Talisman :: Talisman()
{
    MaxDamage = 30;
    criticalChance = 25;
    hitChance = 85;
}

Club :: Club()
{
    MaxDamage = 30;
    enemyMaxDamage = 10;
    criticalChance = 20;
    hitChance = 70;
}

Bow :: Bow()
{
    MaxDamage = 30;
    enemyMaxDamage = 10;
    criticalChance = 25;
    hitChance = 85;
}

Sword :: Sword()
{
    MaxDamage = 35;
    criticalChance = 40;
    hitChance = 75;
}

Whip :: Whip()
{
    MaxDamage = 20;
    enemyMaxDamage = 10;
    criticalChance = 50;
    hitChance = 90;
}

Spear :: Spear()
{
    MaxDamage = 35;
    enemyMaxDamage = 10;
    criticalChance = 40;
    hitChance = 75;
}

WitchWand :: WitchWand()
{
    MaxDamage = 40;
    criticalChance = 30;
    hitChance = 75;
}

Greatsword :: Greatsword()
{
    MaxDamage = 60;
    criticalChance = 50;
    hitChance = 50;
}

