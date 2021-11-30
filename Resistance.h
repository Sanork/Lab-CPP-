#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Resistance
{
private:
	int poison_res;  /*Сопротивление яду*/
	int fire_res;    /*Сопротивление огню*/
	int frost_res;   /*Сопротивление холоду*/
public:
	void Init(int resistancePoison, int resistanceFire, int resistanceFrost);   /*Создание*/
	void Input();   /*Создание вручную*/
	void Print();  /*Получение информации*/
};

