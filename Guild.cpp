#include "Guild.h"
#include <iostream>
#include <string>
#include <windows.h>


using namespace std;

void Guild::Init(string name, int rank, string spec) /*Функция создания гильдии*/
{
	this->name = name;
	this->rank = rank;
	this->spec = spec;
}

void Guild::Input() /*Функция создания гильдии вручную с консоли*/
{
	cout << "Введите название гильдии" << endl;
	cin >> this->name;
	cout << "Введите ранг гильдии" << endl;
	cin >> this->rank;
	cout << "Введите специализацию гильдии" << endl;
	cin >> this->spec;
}

void Guild::Print() /*Функция вывода информации о броне*/
{
	cout << endl << "Гильдия: " << endl;
	cout << "Название гильдии - ";
	cout << this->name << endl;
	cout << "Ранг гильдии - ";
	cout << this->rank << endl;
	cout << "Специализация гильдии - ";
	cout << this->spec << endl;
}