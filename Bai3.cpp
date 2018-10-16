// Bai3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;
#define max 10000
int a[max];
void Taomang(int a[], int &n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100 + 1;
	}
}
void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
int LinearSearch(int a[], int x,int n)
{
	for (int i = 0; i < n; i++)
		if (x == a[i])
			return 1;
	return 0;
}
int Dequy(int a[], int x,int n)
{
	if (n == 0)
		return 0;
	else
		for (int i = 0; i < n; i++)
		{
			if (a[i] == x)
				return 1;
			else
				n--;
		}
	return Dequy(a, x, n);
}
int main()
{
	int n;
	cin >> n;
	Taomang(a, n);
	Xuat(a, n);
	cout << endl;
	int x;
	cout << "Nhap phan tu can tim : ";
	cin >> x;
	//linear
	cout << "Khong de quy : " << endl;
	clock_t start = clock();
	if (LinearSearch(a, x,n) == 1)
		cout << "Co phan tu x trong mang !" << endl;
	else cout << "Khong co phan tu trong mang !" << endl;
	clock_t finish = clock();
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "\n\n";
	printf("Thoi gian thuc thi: %.4lf", duration);
	cout << "\n";
	//binary
	cout << "De quy : " << endl;
	clock_t start1 = clock();
	if (Dequy(a,x,n) == 1)
		cout << "Co phan tu x trong mang !" << endl;
	else cout << "Khong co phan tu trong mang !" << endl;
	clock_t finish1 = clock();
	double duration1 = (double)(finish1 - start1) / CLOCKS_PER_SEC;
	cout << "\n\n";
	printf("Thoi gian thuc thi: %.4lf", duration1);
	cout << "\n";
	if (duration == duration1)
		cout << "Thoi gian chay bang nhau hoac do chay qua nhanh nen khong thay su chenh lech !" << endl;
	else
	{
		if (duration < duration1)
			cout << "Khong de quy chay nhanh hon !" << endl;
		else
			cout << "De quy chay nhanh hon !" << endl;
	}
	system("Pause");
}
