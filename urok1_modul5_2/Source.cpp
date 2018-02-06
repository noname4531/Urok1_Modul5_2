#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int x;
	cout << " Vvedite nomer zadania: ";
	cin >> x;

	if (x == 1)
	{
		//1.	Дан массив.Вывести на экран сначала его неотрицательные элементы, затем отрицательные
		int a[10];
		for (int i = 0; i < 10; i++)
		{
			a[i] = -50 + rand() % 100;
			cout << i << " = " << a[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < 10; i++)
		{
			if (a[i] > 0)
			{
				cout << i << " = " << a[i] << endl;
			}
		}
		cout << endl;

		for (int i = 0; i < 10; i++)
		{
			if (a[i] < 0)
			{
				cout << i << " = " << a[i] << endl;
			}
		}
	}
	if (x == 2)
	{
		//2.	В массиве хранится информация о количестве побед, одержанных 20 футбольными командами.Определить номера команд, имеющих меньше трех побед.

		int a[20];
		for (int i = 0; i < 20; i++)
		{
			a[i] = 1 + rand() % 10;
			cout << i << " = " << a[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < 20; i++)
		{
			if (a[i] < 3)
			cout << i << " = " << a[i] << endl;
		}
	}
	if (x == 3)
	{
		/*3.	Ввести массив, состоящий из 14 элементов целого типа. Найти количество элементов четных по значению.*/
		int a[14];
		for (int i = 0; i < 14; i++)
		{
			a[i] = 1 + rand() % 50;
			cout << i << " = " << a[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < 14; i++)
		{
			if (a[i] % 2 == 0)
			{
				cout << i << " = " << a[i] << endl;
			}
		}
	}
	if (x == 4)
	{
		//Ввести массив, состоящий из 12 элементов целого типа.
		//Получить новый массив, заменив значение пятого элемента среднеарифметическим исходного массива
		int a[12];
		int sum = 0;
		for (int i = 0; i < 12; i++)
		{
			a[i] = 1 + rand() % 50;
			cout << i << " = " << a[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < 12; i++)
		{
			sum += a[i];
			a[5] = sum / 11;
			cout << i << " = " << a[i] << endl;
		}
	}
	if (x == 5)
	{
		// 5.	Задан массив, состоящий из 15 элементов вещественного типа.Определить количество элементов, значения которых больше первого элемента
	}
	int a[15];
	int sum = 0;
	for (int i = 0; i < 15; i++)
	{
		a[i] = 1 + rand() % 50;
		cout << i << " = " << a[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < 12; i++)
	{
		if (a[i] > a[0])
		{
			cout << i << " = " << a[i] << endl;
		}
	}


}

