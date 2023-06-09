﻿#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

void lines()
{
	cout.fill('-');
	cout.width(91);
	cout << "-" << endl;
	cout.fill(' ');
}

void columns(int x)
{
	cout.fill(' ');
	cout.width(x);
	cout << " ";
	cout << "|";
}

void base()
{
	lines();
	cout << "|Прайс - лист";
	columns(77);
	cout << endl;
	lines();
	cout << "|Наименование товара";
	columns(1);
	cout << "Тип товара";
	columns(1);
	cout << "Цена за 1 шт (грн)";
	columns(1);
	cout << "Минимальное количество";
	columns(1);
	cout << "Дата";
	columns(8);
	cout << endl;
	lines();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char x[3][5][15];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> x[i][j];
		}
	}
	base();

	for (int i = 0; i < 3; i++)
	{
		cout << "|";
		for (int j = 0; j < 5; j++)
		{
			cout << x[i][j];
			switch (j)
			{
			case 0:
				columns(20 - strlen(x[i][j]));
				break;
			case 1:
				columns(11 - strlen(x[i][j]));
				break;
			case 2:
				columns(19 - strlen(x[i][j]));
				break;
			case 3:
				columns(23 - strlen(x[i][j]));
				break;
			case 4:
				columns(12 - strlen(x[i][j]));
				break;
			}
		}
		cout << endl;
		lines();
	}
	cout << "|Примечание: К – канцтовары, О – оргтехника";
	columns(47);
	cout << endl;
	lines();
}

// Папка К 4.75 4 03.07.2022 Бумага К 13.90 10 03.04.2021 Калькулятор О 411.00 1 04.03.2022
