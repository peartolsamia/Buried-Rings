#pragma once

#include <iostream>
#include <string>

using namespace std;



class Weapon
{

    protected:
    
    int MaxDamage;
    int hitChance;//chance to hit enemy in percentage
    int criticalChance;//chance to deal critical damage to enemy in percentage
    int enemyMaxDamage;


    public:

    void setMaxDamage(int MaxDamage);
    int getMaxDamage();
    int getEnemyMaxDamage();

    int getCritChance();
    int getHitChance();

};





                                    //START WEAPONS





class Axe : public Weapon //it has chance to critical hit %50
{
    public:

    Axe();

};

class Dagger : public Weapon //it has chance to critical hit %25
{
    public:

    Dagger();

};

class Wand : public Weapon  //it has chance to critical hit %25
{
    public:

    Wand();

};

class Talisman  : public Weapon //it has chance to critical hit %25
{
    public:

    Talisman();

};





                                    //OTHER WEAPONS




class Club  : public Weapon //it has chance to critical hit %40
{
    public:

    Club();

};

class Bow  : public Weapon //it has chance to critical hit %25
{
    public:

    Bow();

};

class Sword  : public Weapon //it has chance to critical hit %40
{
    public:

    Sword();

};

class Whip  : public Weapon //it has chance to critical hit %50
{
    public:

    Whip();

};


class Spear  : public Weapon //it has chance to critical hit %40
{
    public:

    Spear();

};

class WitchWand  : public Weapon //it has chance to critical hit %30
{
    public:

    WitchWand();

};

class Greatsword  : public Weapon //it has chance to critical hit %50
{
    public:

    Greatsword();

};

