#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Weapon
{
private:
	string type;   /*��� ������*/
	int weight;    /*��� ������*/
	int damage;    /*���� ������*/
public:
	void Init(string weaponType, int weaponWeight, int weaponDamage);  /*������� �������� ������*/
	void Input();  /*������� �������� ������ ������� � �������*/
	void Print(); /*������� ������ ���������� �� ������*/
};

