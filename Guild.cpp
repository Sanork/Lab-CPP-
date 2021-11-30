#include "Guild.h"
#include <iostream>
#include <string>
#include <windows.h>


using namespace std;

void Guild::Init(string name, int rank, string spec) /*������� �������� �������*/
{
	this->name = name;
	this->rank = rank;
	this->spec = spec;
}

void Guild::Input() /*������� �������� ������� ������� � �������*/
{
	cout << "������� �������� �������" << endl;
	cin >> this->name;
	cout << "������� ���� �������" << endl;
	cin >> this->rank;
	cout << "������� ������������� �������" << endl;
	cin >> this->spec;
}

void Guild::Print() /*������� ������ ���������� � �����*/
{
	cout << endl << "�������: " << endl;
	cout << "�������� ������� - ";
	cout << this->name << endl;
	cout << "���� ������� - ";
	cout << this->rank << endl;
	cout << "������������� ������� - ";
	cout << this->spec << endl;
}