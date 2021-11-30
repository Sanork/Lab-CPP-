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
	string name; /*���*/
	int lvl; /*�������*/
	string race; /*����*/
	int id;
    static int  count;
public:
	static int GetCount();
	Guild *guild;   /*���������� � �������*/
    Armor arm; /*����� �����*/
	Weapon weap; /*����� ������*/
    Stats stat; /*����� �������������*/
	void Init(string characterName, int characterLVL, string characterRace, Armor arm, Weapon weap, Stats st, Resistance res, Guild* gld); /*�������� ���������*/
	void Input(); /*�������� ��������� ������� � �������*/
	void Print(); /*����� ���������� � ���������*/
};

