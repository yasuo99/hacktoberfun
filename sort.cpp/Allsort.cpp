// Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include "conio.h"
#include "iostream"
#include "math.h"
#include "string.h"
using namespace std;
#define max 10000000
int a[max];
int b[max];
int c[max];
int d[max];
int e[max];
int f[max];
int g[max];
void taomang(int a[],int &n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

//selection sort
void SelectionSort(int a[],int n)
{
	int vt;
	for (int i = 0; i < n; i++)
	{
		vt = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[vt])
				vt = j;
		}
		if (vt != i)
		{
			int k = a[i];
			a[i] = a[vt];
			a[vt] = k;
		}
	}
}
//bubble sort
void BubbleSort(int a[],int n)
{
	int co = 1;
	int j = 0;
	while (co)
	{
		co = 0;
		j++;
		for (int i = 0; i < n - j; i++)
		{
			if (a[i] > a[i + 1])
			{
				int k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
				co = 1;
			}
		}
	}
}

//interchange sort 
void interchagesort(int a[],int n)
{
	for (int i = 0; i < n-1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
			{
				int k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
}

//insertion sort
void InsertionSort(int a[],int n)
{
	for (int i = 1; i < n; i++)
	{
		int x = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > x)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}

//merge sort 
void Merge(int a[], int left, int mid, int right)
{
	int *temp;
	int i = left;
	int j = mid + 1;

	temp = new int[right - left + 1];

	for (int k = 0; k <= right - left; k++)
	{
		if (a[i] < a[j])
		{

			temp[k] = a[i];
			i++;
		}
		else
		{
			temp[k] = a[j];
			j++;
		}


		if (i == mid + 1)
		{

			while (j <= right)
			{
				k++;
				temp[k] = a[j];
				j++;
			}
			break;
		}


		if (j == right + 1)
		{

			while (i <= mid)
			{
				k++;
				temp[k] = a[i];
				i++;
			}
			break;
		}
	}

	for (int k = 0; k <= right - left; k++)
		a[left + k] = temp[k];
	delete temp;
}

void MergeSort(int a[], int left, int right)
{
	if (right > left)
	{
		int mid; // Phan tu o giua
		mid = (left + right) / 2;
		MergeSort(a, left, mid);
		MergeSort(a, mid + 1, right);
		Merge(a, left, mid, right);
	}
}
//quick sort 
void Quicksort(int a[],int left,int right)
{
	int i, j, x, y;
	i = left; j = right;
	x = a[(left + right) / 2];
	do
	{
		while (a[i] < x && i < right) i++;
		while (a[j] > x && j > left) j--;
		if (i <= j)
		{
			y = a[i]; a[i] = a[j]; a[j] = y;
			i++; j--;
		}
	} while (i <= j);
	if (left < j) Quicksort(a, left, j);
	if (i < right) Quicksort(a, i, right);
}
void Xuat(int a[],int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ", ";
	cout << endl;
}
int main()
{
	int n;
	cout << "Nhap n : ";
	cin >> n;
	//Selection sort
	cout << "Seletion sort: " << endl;
	taomang(a, n);
	clock_t start = clock();
	SelectionSort(a, n);
	clock_t finish = clock();
	double duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout << "\n";
	printf("Thoi gian thuc thi: %.4lf", duration);
	cout << "\n";
	//Bubble sort
	cout << "Bubble sort: " << endl;
	taomang(a, n);
	clock_t start1 = clock();
	BubbleSort(a, n);
	clock_t finish1 = clock();
	double duration1 = (double)(finish1 - start1) / CLOCKS_PER_SEC;
	cout << "\n";
	printf("Thoi gian thuc thi: %.4lf", duration1);
	cout << "\n";
	//Interchange Sort
	cout << "Interchange Sort: " << endl;
	taomang(a, n);
	clock_t start2 = clock();
	interchagesort(a, n);
	clock_t finish2 = clock();
	double duration2 = (double)(finish2 - start2) / CLOCKS_PER_SEC;
	cout << "\n";
	printf("Thoi gian thuc thi: %.4lf", duration2);
	cout << "\n";
	//Insertion sort
	cout << "Insertion Search : " << endl;
	taomang(a, n);
	clock_t start3 = clock();
	InsertionSort(a,n);
	clock_t finish3 = clock();
	double duration3 = (double)(finish3 - start3) / CLOCKS_PER_SEC;
	cout << "\n";
	printf("Thoi gian thuc thi: %.4lf", duration3);
	cout << "\n";
	//Merger Sort 
	cout << "Merge Sort : " << endl;
	taomang(a, n);
	clock_t start4 = clock();
	MergeSort(a, 0, n - 1);
	clock_t finish4 = clock();
	double duration4 = (double)(finish4 - start4) / CLOCKS_PER_SEC;
	cout << "\n";
	printf("Thoi gian thuc thi: %.4lf", duration4);
	cout << "\n";
	//Quick sort
	cout << "Quick sort : " << endl;
	taomang(a, n);
	clock_t start5 = clock();
	Quicksort(a,0,n-1);
	clock_t finish5 = clock();
	double duration5 = (double)(finish5 - start5) / CLOCKS_PER_SEC;
	cout << "\n";
	printf("Thoi gian thuc thi: %.4lf", duration5);
	cout << "\n";
	system("Pause");

}

