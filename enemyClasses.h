#pragma once

#include <iostream>
#include <string>
#include "weaponClasses.h"
#include "heroClasses.h"
#include "otherFuncs.h"


class Hero;
class Warrior;
class Thief;
class Mage;
class LightMage;
class DarkMage;
class Cleric;


using namespace std;

class Enemy
{
    protected:

    int Health{40}, maxHealth{40} , MaxCoinDrop;
    string lightOrDark;
    string type;

    public:

    void addHealth(int HP);//int HP : hp amount that will be added
    void loseHealth(int HP);//int HP : hp amount that will be substract
    int getHealth();


    int getDroppedCoinAmount(); //gets a random coin amount 0 - MaxCoinDrop

    string getLightOrDark();

    string getType();
    void setType(string Type);

    int getMaxHealth();

    virtual void StandardAttack(Hero &player, int rand){}

};


                                                //WEAK FOES                     //enemy kind 1





class Bandit : public Enemy
{
    private:

    Club Weapon;
    
    public:

    Bandit(); //lightOrDark : light || health : 8

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    ~Bandit()
    {
        whatKindOfEnemyDied = 1;//sets type of enemy to calculate dropped coin amount

    }

};



class Goblin : public Enemy
{
    public:

    Goblin(); //lightOrDark : light || health : 7

    ~Goblin(){}

};

class daggerGoblin : virtual public Goblin
{
    private:

    Dagger Weapon;

    public:

    daggerGoblin()
    {
        type = "Dagger Goblin";
    }

    ~daggerGoblin()
    {
        whatKindOfEnemyDied = 1;

    }

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount
    
};

class spearGoblin : virtual public Goblin
{
    private:

    Spear Weapon;

    public:

    spearGoblin()
    {
        type = "Spear Goblin";
    }

    ~spearGoblin()
    {
        whatKindOfEnemyDied = 1;

    }

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

};



class Skeleton : public Enemy
{
    public:

    Skeleton(); //lightOrDark : dark || health : 5

    ~Skeleton(){}
};

class bowSkeleton : virtual public Skeleton
{
    private:

    Bow Weapon;

    public:

    bowSkeleton()
    {
        type = "Bow Skeleton";
    }

    ~bowSkeleton()
    {
        whatKindOfEnemyDied = 1;

    }

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

};

class whipSkeleton : virtual public Skeleton
{
    private:

    Whip Weapon;

    public:

    whipSkeleton()
    {
        type = "Whip Skeleton";
    }

    ~whipSkeleton()
    {
        whatKindOfEnemyDied = 1;

    }

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

};


class Wolf : public Enemy //hit chance : %40
{
    public:

    Wolf(); //lightOrDark : light || health : 6 || damage : 12

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    ~Wolf()
    {
        whatKindOfEnemyDied = 1;
        
    }
};


class Shark : public Enemy //hit chance : %35
{
    public:

    Shark(); //lightOrDark : light || health : 10 || damage : 11

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    ~Shark()
    {
        whatKindOfEnemyDied = 1;
        
    }
};


                                                //STRONG FOES                     //enemy kind 2







class Golem : public Enemy //hit chance : %50
{
    public:

    Golem(); //lightOrDark : dark || health : 50 || damage : 15

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    void SpecialAttack(Hero &player); //powerful attack in every 4 turns, golems special: gets harder (makes a standard attack and heros next attack's damage reduces to half)

    ~Golem()
    {
        whatKindOfEnemyDied = 2;
        
    }
};


class Vampire : public Enemy //hit chance : %60
{
    public:

    Vampire(); //lightOrDark : dark || health : 30 || damage : 20

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount
    
    void StandardAttackAfterBleedDamage(Hero &player, int rand);

    void SpecialAttack(Hero &player); //powerful attack in every 7 turns, vampires special: bleeding attack (makes a standard attack and after this attack, hero loses -5 hp for 2 turns)

    ~Vampire()
    {
        whatKindOfEnemyDied = 2;

    }
};


class Siren : public Enemy //hit chance : %70
{
    public:

    Siren(); //lightOrDark : light || health : 25 || damage : 20

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    void SpecialAttack(Hero &player); //powerful attack in 3rd turn of the fight, sirens special: sirens song (heros damage reduces -5 for this fight) executable 1 per fight

    ~Siren()
    {
        whatKindOfEnemyDied = 2;
        
    }
};


class KingsGuard : public Enemy
{
    private:

    Sword Weapon;


    public:

    KingsGuard(); //lightOrDark : light || health : 35

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    void SpecialAttack(Hero &player); //powerful attack in every 4 turns, kings guards special: self heal (+15hp)

    ~KingsGuard()
    {
        whatKindOfEnemyDied = 2;
        
    }

};


                                                //BOSSES                     //enemy kind 3





class Dragon : public Enemy //hit chance : %40
{
    public:

    Dragon(); //lightOrDark : light boss || health : 100 || damage : 0 - 40

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    void SpecialAttack(Hero &player, int random); //powerful attack in every 3 turns, dragons special: fire breath (gives 15 damage with breathing fire. then in %50 chance hero gets stunned and dragon hits with a standard attack again)

    ~Dragon()
    {
        whatKindOfEnemyDied = 3;
        
    }
};


class Witch : public Enemy //starts battle with 2 skeletons
{
    private:

    Wand Weapon;


    public:

    Witch(); //lightOrDark : dark boss || health : 40

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    ~Witch()
    {
        whatKindOfEnemyDied = 3;
        
    }
};


class TheKing : public Enemy // starts battle with a guard
{
    private:

    Greatsword Weapon;


    public:

    TheKing(); //lightOrDark : light boss || health : 80

    void StandardAttack(Hero &player, int rand); //if a weapon is used by enemy, damage deals 0 - weapons damage stat. otherwise enemy has its own damage amount

    void SpecialAttack(Hero &player, int random1, int random2); //powerful attack after his guard dies, kings special: makes special attack times repeatedly and summons another guard

    ~TheKing()
    {
        whatKindOfEnemyDied = 3;
        
    }
};