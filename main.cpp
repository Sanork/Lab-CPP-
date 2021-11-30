#include <iostream>
#include <conio.h>
#include "Armor.h"
#include "Character.h"
#include "Resistance.h"
#include "Stats.h"
#include "Weapon.h"
#include <string>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	cout << "Пример созданного персонажа" << endl;
	Guild guild;
	guild.Init("Гильдия магов", 15, "Колдовство");
	Character* exm[2];   //Статический массив
	exm[0] = new Character;
	exm[0]->arm.Init("Кожа", 8, "Легкая", 32);
	exm[0]->weap.Init("Лук", 2, 44);
	exm[0]->stat.Init(15, 72, 21, 1000, 500, exm[0]->stat.res);
	exm[0]->stat.res.Init(20, 10, 10);
	exm[0]->Init("Леголас", 52, "Лесной эльф", exm[0]->arm, exm[0]->weap, exm[0]->stat, exm[0]->stat.res, &guild); /*Создание персонажа для примера*/
	exm[0]->Print();   /*Вывод*/
	cout << endl;
	exm[1] = new Character;
	exm[1]->arm.Init("Железо", 8, "Тяжелая", 32);
	exm[1]->weap.Init("Меч", 7, 55);
	exm[1]->stat.Init(30, 20, 80, 2000, 400, exm[1]->stat.res);
	exm[1]->stat.res.Init(30, 50, 20);
	exm[1]->Init("Леон", 48, "Человек", exm[1]->arm, exm[1]->weap, exm[1]->stat, exm[1]->stat.res, &guild); /*Создание персонажа для примера*/
	exm[1]->Print();
	cout << endl << "Количество созданных персонажей:" << Character::GetCount();
	delete exm[0];
	delete exm[1];

}