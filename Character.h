#pragma once
#include <string>
#include <windows.h>
#include "Armor.h"
#include "Weapon.h"
#include "Stats.h"
#include "Guild.h"

using namespace std;

class Character
{
private:
	string name; /*Имя*/
	int lvl; /*Уровень*/
	string race; /*Раса*/
	int id;
    static int  count;
public:
	static int GetCount();
	Guild *guild;   /*Информация о гильдии*/
    Armor arm; /*Класс брони*/
	Weapon weap; /*Класс оружия*/
    Stats stat; /*Класс характеристик*/
	void Init(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res, Guild* gld); /*Создание персонажа*/
	void Input(); /*Создание персонажа вручную с консоли*/
	void Print(); /*Вывод информации о персонаже*/
};

