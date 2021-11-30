#include "Weapon.h"
#include <string>
#include <windows.h>
#include <iostream>

using namespace std;

void Weapon::Init(string weaponType, int weaponWeight, int weaponDamage) /*������� �������� ������*/
{
	this->type = weaponType;
	this->weight = weaponWeight;
	this->damage = weaponDamage;
}

void Weapon::Input()   /*������� �������� ������ ������� � �������*/
{
	cout << "������� ��� ������" << endl;
	cin >> this->type;
	cout << "������� ��� ������" << endl;
	cin >> this->weight;
	cout << "������� ���� ������" << endl;
	cin >> this->damage;
}

void Weapon::Print()  /*������� ������ ���������� �� ������*/
{
	cout << endl << "������: " << endl;
	cout << "��� ������ - ";
	cout << this->type << endl;
	cout << "��� ������ - ";
	cout << this->weight << endl;
	cout << "���� ������ - ";
	cout << this->damage << endl;
}
