#pragma once
#include <string>
#include <windows.h>

using namespace std;

class Resistance
{
private:
	int poison_res;  /*������������� ���*/
	int fire_res;    /*������������� ����*/
	int frost_res;   /*������������� ������*/
public:
	void Init(int resistancePoison, int resistanceFire, int resistanceFrost);   /*��������*/
	void Input();   /*�������� �������*/
	void Print();  /*��������� ����������*/
};

