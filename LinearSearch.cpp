// LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

int LinearSearch(int a[], int x)
{
	for (int i = 0; i < 10; i++)
		if (x == a[i])
			return 1;
	return 0;
}
int BinarySearch(int a[], int x)
{
	int l = 0;
	int r = 9;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
			return 1;
		if (x < a[m])
			r = m - 1;
		else
			l = m + 1;
	}
	return 0;
}
int main()
{
	int a[10] = { 1,3,5,7,8,14,15,22,33,35 };
	int x;
	cout << "Nhap phan tu can tim : ";
	cin >> x;
	//linear
	cout << "Linear Search : " << endl;
	clock_t start = clock();
	if (LinearSearch(a,x) == 1)
		cout << "Co phan tu x trong mang !" << endl;
	else cout << "Khong co phan tu trong mang !" << endl;
	clock_t finish = clock();
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "\n\n";
	printf("Thoi gian thuc thi: %.4lf", duration);
	cout << "\n";
	//binary
	cout << "Binary Search : " << endl;
	clock_t start1 = clock();
	if (BinarySearch(a, x) == 1)
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
			cout << "Linear search chay nhanh hon !" << endl;
		else
			cout << "Binary search chay nhanh hon !" << endl;
	}
	system("Pause");
}



