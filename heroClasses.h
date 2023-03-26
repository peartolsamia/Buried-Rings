#pragma once

#include <iostream>
#include <string>
#include "weaponClasses.h"
#include "enemyClasses.h"
#include "otherFuncs.h"


class Enemy;
class Bandit;
class Goblin;
class daggerGoblin;
class spearGoblin;
class Skeleton;
class bowSkeleton;
class whipSkeleton;
class Wolf;
class Shark;
class Golem;
class Vampire;
class Siren;
class KingsGuard;
class Dragon;
class Witch;
class TheKing;


using namespace std;


class Hero
{
    protected:

    string Name;
    int Health, maxHealth;
    int HealingPotCnt; //number of healing potions
    int TotalCoins{0};
    int ManaCnt{0};//in every successful hit you get a mana point. you can execute special moves in fight with mana points (1 successful hit = 1 mana)

    public:

    void setName(string Name);
    string getName();
    
    void addHealth(int HP);//int HP : hp amount that will be added
    void loseHealth(int HP);//int HP : hp amount that will be substract
    int getHealth();

    void upgradeMaxHealth(int Coins);//increases max health +5hp for 100 coin
    int getMaxHealth();
    
    void buyPots(int Coins);//int pots : pot amount that will be added -> 1 pot for 50 coins
    void usePot();
    int getPots();
    
    void addCoin(int Coins);//int coins : coin amount that will be added
    void loseCoin(int Coins);//int coins : coin amount that will be substract
    int getCoins();

    void increaseMana();
    int getMana();

    void shop();//a shop that player may turn collected coins to increase max hp or buy healing pots

    void StandardAttack(Enemy &foe, int rand){}
    void StandardAttackWithGolemDebuff(Enemy &foe, int rand){}
    void StandardAttackWithSirenDebuff(Enemy &foe, int rand){}
    int SpecialAttack(Enemy &foe1, int random){}


};

class Warrior : public Hero
{

    private:

    Axe Weapon;

    public:

    Warrior();//hp: 150 pots: 5

    void StandardAttack(Enemy &foe, int rand); //small attack that every class can do, executable every turn, damage depends on weapons damage

    void StandardAttackWithGolemDebuff(Enemy &foe, int rand);//if golem debuffs hero, hero deals %50 less damage for 1 turn

    void StandardAttackWithSirenDebuff(Enemy &foe, int rand);//if siren debuffs hero, hero deals 5 less damage for the entire fight
    
    int SpecialAttack(Enemy &foe1, Enemy &foe2, Enemy &foe3); //powerful attack in every 6 succesful hit, worriors special: performs standard attack 3 times(may executable to seperate enemies)
    int SpecialAttack(Enemy &foe1, Enemy &foe2);
    int SpecialAttack(Enemy &foe1, int random);

    ~Warrior()
    {
        cout<<endl<<"You Died! It's so sad to "<<Name<<"'s story ended like this."<<endl;
        
        heroDied = 1;
    }

};

class Thief : public Hero
{

    private:

    Dagger Weapon;

    public:

    Thief();//hp: 100 pots: 5

    void StandardAttack(Enemy &foe, int rand);

    void StandardAttackWithGolemDebuff(Enemy &foe, int randfoe);//if golem debuffs hero, hero deals %50 less damage for 1 turn

    void StandardAttackWithSirenDebuff(Enemy &foe, int rand);//if siren debuffs hero, hero deals 5 less damage for the entire fight
    
    int SpecialAttack(Enemy &foe, int rand); //powerful attack in every 2 succesful hit, thiefs special: %100 critical chance standard attack (there is no chance to miss)

    int SpecialAttack(Enemy &foe1, Enemy &foe2, Enemy &foe3){}

    int SpecialAttack(Enemy &foe1, Enemy &foe2){}
    

    ~Thief()
    {
        cout<<endl<<"You Died! It's so sad to "<<Name<<"'s story ended like this."<<endl;

        heroDied = 1;
    }

};

class Mage : public Hero
{

    private:

    Wand Weapon;

    public:

    Mage();//hp: 100 pots: 5

    void StandardAttack(Enemy &foe, int rand);

    void StandardAttackWithGolemDebuff(Enemy &foe, int rand);//if golem debuffs hero, hero deals %50 less damage for 1 turn

    void StandardAttackWithSirenDebuff(Enemy &foe, int rand);//if siren debuffs hero, hero deals 5 less damage for the entire fight

    ~Mage()
    {
        cout<<endl<<"You Died! It's so sad to "<<Name<<"'s story ended like this."<<endl;

        heroDied = 1;
    }

};

class LightMage : virtual public Mage
{
    public:

    int SpecialAttack(Enemy &foe, int random); //powerful attack in every 4 succesful hit, light mages special: instant kill to a dark enemy !cannot damage a light enemy with special (to a dark boss, light mage hits with 2 standard attack)

    int SpecialAttack(Enemy &foe1, Enemy &foe2, Enemy &foe3){}

    int SpecialAttack(Enemy &foe1, Enemy &foe2){}

};

class DarkMage : virtual public Mage
{
    public:

    int SpecialAttack(Enemy &foe, int random); //powerful attack in every 4 succesful hit, dark mages special: instant kill to a light enemy !cannot damage a dark enemy with special (to a light boss, dark mage hits with 2 standard attack)

    int SpecialAttack(Enemy &foe1, Enemy &foe2, Enemy &foe3){}

    int SpecialAttack(Enemy &foe1, Enemy &foe2){}

};


class Cleric : public Hero
{

    private:

    Talisman Weapon;

    public:

    Cleric();//hp: 100 pots: 3

    void StandardAttack(Enemy &foe, int rand);

    void StandardAttackWithGolemDebuff(Enemy &foe, int rand);//if golem debuffs hero, hero deals %50 less damage for 1 turn

    void StandardAttackWithSirenDebuff(Enemy &foe, int rand);//if siren debuffs hero, hero deals 5 less damage for the entire fight
    
    int SpecialAttack(Enemy &foe, int rand); //powerful attack in every 4 succesful hit, clerics special: restore full health

    int SpecialAttack(Enemy &foe1, Enemy &foe2, Enemy &foe3){}

    int SpecialAttack(Enemy &foe1, Enemy &foe2){}

    ~Cleric()
    {
        cout<<endl<<"You Died! It's so sad to "<<Name<<"'s story ended like this."<<endl;

        heroDied = 1;
    }

};

