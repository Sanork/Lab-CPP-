#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Weapon
{
private:
	string type;   /*Тип оружия*/
	int weight;    /*Вес оружия*/
	int damage;    /*Урон оружия*/
public:
	void Init(string weaponType, int weaponWeight, int weaponDamage);  /*Функция создания оружия*/
	void Input();  /*Функция создания оружия вручную с консоли*/
	void Print(); /*Функция вывода информации об оружии*/
};

