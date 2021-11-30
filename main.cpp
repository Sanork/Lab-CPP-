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
	cout << "������ ���������� ���������" << endl;
	Guild guild;
	guild.Init("������� �����", 15, "����������");
	Character* exm[2];   //����������� ������
	exm[0] = new Character;
	exm[0]->arm.Init("����", 8, "������", 32);
	exm[0]->weap.Init("���", 2, 44);
	exm[0]->stat.Init(15, 72, 21, 1000, 500, exm[0]->stat.res);
	exm[0]->stat.res.Init(20, 10, 10);
	exm[0]->Init("�������", 52, "������ ����", exm[0]->arm, exm[0]->weap, exm[0]->stat, exm[0]->stat.res, &guild); /*�������� ��������� ��� �������*/
	exm[0]->Print();   /*�����*/
	cout << endl;
	exm[1] = new Character;
	exm[1]->arm.Init("������", 8, "�������", 32);
	exm[1]->weap.Init("���", 7, 55);
	exm[1]->stat.Init(30, 20, 80, 2000, 400, exm[1]->stat.res);
	exm[1]->stat.res.Init(30, 50, 20);
	exm[1]->Init("����", 48, "�������", exm[1]->arm, exm[1]->weap, exm[1]->stat, exm[1]->stat.res, &guild); /*�������� ��������� ��� �������*/
	exm[1]->Print();
	cout << endl << "���������� ��������� ����������:" << Character::GetCount();
	delete exm[0];
	delete exm[1];

}