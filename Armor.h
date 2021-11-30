#pragma once
#include <string>
#include <windows.h>


using namespace std;

class Armor
{
private:
	string material;  /*Материал брони*/
	int weight;     /*Вес брони*/
	string w_class;    /*Класс брони*/
	int defense;   /*Защита брони*/
public:
	void Init(string armorMaterial, int armorWeight, string armorClass, int armorDefence); /*Функция создания брони*/
	void Input(); /*Функция создания брони вручную с консоли*/
	void Print(); /*Функция вывода информации о броне*/
};

