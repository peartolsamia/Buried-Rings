#pragma once

#include <iostream>
#include <string>
#include "weaponClasses.h"
#include "heroClasses.h"
#include "enemyClasses.h"


class Hero;
class Warrior;
class Thief;
class Mage;
class LightMage;
class DarkMage;
class Cleric;

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

int chosenClass;

int turns{1}; //turn counter for every fight (will reset to 0 in the start of combat)

int enemyCnt, heroDied{0};

int whatKindOfEnemyDied{0};

int GolemDebuffFlag{0}, VampireDebuffFlag{0}, SirenDebuffFlag{0};//some enemies gives debuff to hero with its special strike. turns which debuff is active, flag is 1 otherwise 0

int requiredStoryPart{1};

void resetTurns();

int enemyDiedGetMyCoins(Hero &player);//when an enemy dies destructer gives the enemies type whatKindOfEnemyDied

void removeGolemDebuff();

void removeVampireDebuff();

void removeSirenDebuff();

int tellTheStory(Hero &player);

void areaIsSafeCallHarold(Hero &player);

void printPlayersStats(Hero player);

void printEnemyStats(Enemy foe);

int HaroldsGame(Hero &player);

int HaroldGuess(Hero &player, int random, int round);

int CombatOptions();//prints a selection menu to player can select standard attack(1), special attack(2), use pot(3), print player stats(4), print enemy stats(5)

template <class T>

int WarriorPlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int WarriorPlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive);

template <class T>

int WarriorPlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int WarriorPlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int WarriorPlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int ThiefPlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int ThiefPlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive);

template <class T>

int ThiefPlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int ThiefPlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int ThiefPlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int LightMagePlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int LightMagePlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive);

template <class T>

int LightMagePlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int LightMagePlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int LightMagePlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int DarkMagePlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int DarkMagePlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive);

template <class T>

int DarkMagePlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int DarkMagePlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int DarkMagePlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int ClericPlayersTurn(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T>

int ClericPlayersTurn(Enemy &enemy1, Enemy &enemy2, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive);

template <class T>

int ClericPlayersTurn(Enemy &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int ClericPlayersTurnWithGolemDebuff(Golem &enemy1, T &player, int random, int &isEnemy1Alive);

template <class T>

int ClericPlayersTurnWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player, int random, int &isEnemy1Alive, int &isEnemy2Alive, int &isEnemy3Alive);

template <class T> 

int Combat(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player);

template <class T> 

int Combat(Enemy &enemy1, Enemy &enemy2, T &player);

template <class T> 

int Combat(Enemy &enemy1, T &player);

template <class T> 

int CombatDragonFight1(Dragon &enemy, T &player);

template <class T> 

int CombatDragonFight2(Dragon &enemy, T &player);

template <class T> 

int CombatVampireFight(Vampire &enemy1, Vampire &enemy2, T &player);

template <class T> 

int CombatVampireFight(Vampire &enemy1, Vampire &enemy2, Vampire &enemy3, T &player);

template <class T> 

int CombatGolemFight(Golem &enemy, T &player);

template <class T> 

int CombatSirenFight(Siren &enemy1, Siren &enemy2, Siren &enemy3, T &player);

template <class T> 

int CombatSharkFightWithSirenDebuff(Enemy &enemy1, Enemy &enemy2, Enemy &enemy3, T &player);

template <class T> 

int CombatWitchFight(Witch &enemy1, T &player);

template <class T> 

int ClericCombatWitchFight(Witch &enemy1, T &player);

template <class T> 

int CombatKingsGuardFight(KingsGuard &enemy1, KingsGuard &enemy2, T &player);

template <class T> 

int CombatKingFight(TheKing &enemy1, T &player);

template <class T> 

int ClericCombatKingFight(TheKing &enemy1, T &player);

template <class T> 

void PlayTheGame(int ChoiceFromStory, int isPlayerAlive, T &Player);


