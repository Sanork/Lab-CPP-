#include <iostream>
#include <string>
#include <windows.h>
#include "Resistance.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

void Armor::Init(string armorMaterial, int armorWeight, string armorClass, int armorDefence) /*Функция создания брони*/
{
	this->material = armorMaterial;
	this->weight = armorWeight;
	this->w_class = armorClass;
	this->defense = armorDefence;
}

void Armor::Input() /*Функция создания брони вручную с консоли*/
{
	cout << "Введите материал брони" << endl;
	cin >> this->material;
	cout << "Введите вес брони" << endl;
	cin >> this->weight;
	cout << "Введите класс брони" << endl;
	cin >> this->w_class;
	cout << "Введите показатель защиты брони" << endl;
	cin >> this->defense;
}

void Armor::Print() /*Функция вывода информации о броне*/
{
	cout << endl << "Броня: " << endl;
	cout << "Материал брони - ";
	cout << this->material << endl;
	cout << "Вес брони - ";
	cout << this->weight << endl;
	cout << "Класс брони - ";
	cout << this->w_class << endl;
	cout << "Показатель защиты брони - ";
	cout << this->defense << endl;
}