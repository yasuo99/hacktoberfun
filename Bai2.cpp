// Bai2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#define max 10
using namespace std;
void TaoMaTran(int A[max][max],int B[max][max], int n);
void XuatMaTran(int A[max][max], int n);
void Tich(int A[max][max], int B[max][max], int C[max][max], int n);
void main()
{
	int A[max][max], B[max][max], C[max][max], n;
	printf("Nhap cap n = ");
	cin >> n;
	TaoMaTran(A, B,n);
	printf("Ma tran A vua tao\n");
	XuatMaTran(A, n);
	printf("\nMa tran B vua tao\n");
	XuatMaTran(B, n);
	printf("\nMa tran C=A*B\n");
	Tich(A, B, C, n);
	XuatMaTran(C, n);
}
void TaoMaTran(int A[max][max],int B[max][max], int n)
{
	srand(time(NULL));
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			A[i][j] = rand() % (9 + 1) + 1;;
		}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			B[i][j] = rand() % (9 + 1) + 1;;
		}
}
void XuatMaTran(int A[max][max], int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)

			printf("%d\t", A[i][j]);
	}
}
void Tich(int A[max][max], int B[max][max], int C[max][max], int n)
{
	int i, j, k;
	for (i = 0; i < n; i++)
		for (k = 0; k < n; k++)
		{
			C[i][k] = 0;
			for (j = 0; j < n; j++)
				C[i][k] = C[i][k] + A[i][j] * B[j][k];
		}
}