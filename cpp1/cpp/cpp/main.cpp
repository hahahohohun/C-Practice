//using namespace std;
#define _CRT_SECURE_NO_WARINGS
#include <stdlib.h>
#include <stdio.h>
#define INT_MAX 100000
#define SIZE 100


void Swap(int* pA, int* pB)
{
	int nTemp = *pA;
	*pA = *pB;
	*pB = nTemp;
}

int arry[SIZE];

int main()
{
	int  n, min, index;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arry[i]);
	}

	//삽입정렬.
	for (int i = 0; i < n - 1; i++)
	{
		int j = i;
		while (j >= 0 && arry[j] > arry[j + 1])
		{
			Swap(&arry[j], &arry[j + 1]);
			j--;
		}
	}

	//선택정렬.
	//for (int i = 0; i < n; i++)
	//{
	//	min = INT_MAX;
	//	for (int j = 0; j < n; j++)
	//	{
	//		if (min > arry[j])
	//		{
	//			min = arry[j];
	//			index = j;
	//		}
	//	}
	//	Swap(&arry[i], &arry[index]);
	//}

	for (int i = 0; i < n; i++)
	{
		printf_s("%d ", arry[i]);
	}
}