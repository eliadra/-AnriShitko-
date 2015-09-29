// �������������1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include"stack.h"
#include <iostream>

using namespace std;

const unsigned int SIZE_OF_ARRAY = 10;

void printArr(Steck arr[], int i) //������� ������
{
	cout << " arr[ " << i << " ] = {";
	arr[i].print();
	cout << "}\n";
}

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	Steck arr[SIZE_OF_ARRAY];
	double min = arr[0].getNumber(), max = min;
	int numb_min = 0, numb_max = 0;
	cout << "\n";

	for (int i = 0; i < SIZE_OF_ARRAY; i++) //����� ������� ������
	{
		printArr(arr, i);
	}

	for (int i = 1; i < SIZE_OF_ARRAY; i++) // �������� �������� �� ��� � ����
	{
		int temp = arr[i].getNumber(); 
		if (temp < min)
		{
			min = temp;
			numb_min = i;
		}
		if (temp > max)
		{
			max = temp;
			numb_max = i;
		}
	}

	cout << "\n Max:   ";
	printArr(arr, numb_max);
	cout << "\n Min:   ";
	printArr(arr, numb_min);
	cout << "\n";

	cout << "����� � �������������� ����������: " << endl;
	for (int i = 0; i < SIZE_OF_ARRAY; i++) // ���������� ����� � �������������� �������
	{
		if (arr[i].check0())
		{
			printArr(arr, i);
		}
	}
	cout << "\n ";

	return 0;
}