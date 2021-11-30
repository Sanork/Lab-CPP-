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

void Character::Init(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res, Guild *gld) /*�������� ���������*/
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

void Character::Input() /*�������� ��������� ������� � �������*/
{
	cout << "������� ��� ���������" << endl;
	cin >> this->name;
	cout << "������� ������� ���������" << endl;
	cin >> this->lvl;
	cout << "������� ���� ���������" << endl;
	cin >> this->race;
	this->arm.Input();
	this->weap.Input();
	this->stat.Input();
	this->guild->Input();
	Character::count++;
	id = Character::count;
}

void Character::Print() /*����� ���������� � ���������*/
{
	cout << "��������: ";
	cout << this->name << endl;
	cout << "ID: ";
	cout << this->id << endl;
	cout << "������� - ";
	cout << this->lvl << endl;
	cout << "���� - ";
	cout << this->race << endl;
	this->arm.Print();
	this->weap.Print();
	this->stat.Print();
	this->guild->Print();
}

int Character::count = 0;