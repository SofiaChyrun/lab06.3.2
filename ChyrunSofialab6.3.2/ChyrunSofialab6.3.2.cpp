// ChyrunSofialab6.3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_06_3.cpp
// < Чирун Софія >
// Лабораторна робота № 6.3.2
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів   
// Варіант 18

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
	   Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
	   Print(a, size, i + 1);
	else
	   cout << endl;
}

int Sort(int* a, const int size, int i, int s)
{
	int l;
	l = a[i];
	a[i] = a[i + 1];
	a[i + 1] = l;

	Print(a, size, 0);
	if (i < size - 2) 
	{

	   s = Sort(a, size, i + 2, s++) + 1;
	}
	else s++;
	return s;
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 26;
	int a[n];
	int Low = 3;
	int High = 92;
	int s = 0;
	Create(a, n, Low, High, 0);
	Print(a, n, 0);
	s = Sort(a, n, 0, s);
	cout << "CountStep=" << s;
	return 0;
}

