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
		//1.	��� ������.������� �� ����� ������� ��� ��������������� ��������, ����� �������������
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
		//2.	� ������� �������� ���������� � ���������� �����, ���������� 20 ����������� ���������.���������� ������ ������, ������� ������ ���� �����.

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
		/*3.	������ ������, ��������� �� 14 ��������� ������ ����. ����� ���������� ��������� ������ �� ��������.*/
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
		//������ ������, ��������� �� 12 ��������� ������ ����.
		//�������� ����� ������, ������� �������� ������ �������� �������������������� ��������� �������
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
		// 5.	����� ������, ��������� �� 15 ��������� ������������� ����.���������� ���������� ���������, �������� ������� ������ ������� ��������
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

