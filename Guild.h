#pragma once
#include <string>
#include <windows.h>
using namespace std;

class Guild
{
private:
	string name;
	int rank;
	string spec;
public:
	void Init(string name, int rank, string spec); /*��������*/
	void Input(); /*�������� �������*/
	void Print(); /*����� ����������*/
};

