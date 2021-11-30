#include <iostream>
#include <string>
#include <windows.h>
#include "Character.h"
#include "Weapon.h"
#include "Armor.h"
#include "Resistance.h"

using namespace std;

int Character::GetCount()
{
	return count;
}

void Character::Init(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res, Guild *gld) /*Создание персонажа*/
{
	name = characterName;
	this->lvl = characterLVL;
	this->race = characterRace;
	this->arm = arm;
	this->weap = weap;
	this->stat = st;
	this->guild = gld;
	Character::count++;
	id = Character::count;
}

void Character::Input() /*Создание персонажа вручную с консоли*/
{
	cout << "Введите имя персонажа" << endl;
	cin >> this->name;
	cout << "Введите уровень персонажа" << endl;
	cin >> this->lvl;
	cout << "Введите расу персонажа" << endl;
	cin >> this->race;
	this->arm.Input();
	this->weap.Input();
	this->stat.Input();
	this->guild->Input();
	Character::count++;
	id = Character::count;
}

void Character::Print() /*Вывод информации о персонаже*/
{
	cout << "Персонаж: ";
	cout << this->name << endl;
	cout << "ID: ";
	cout << this->id << endl;
	cout << "Уровень - ";
	cout << this->lvl << endl;
	cout << "Раса - ";
	cout << this->race << endl;
	this->arm.Print();
	this->weap.Print();
	this->stat.Print();
	this->guild->Print();
}

int Character::count = 0;