using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "Arr.h"

// ����
// ����(����)
// ����,����,�ܺ�(������)

//�޸� ����
// ����
// ������
// ROM
// �� ����(�����Ҵ�)

void BubbleSort(int* pData, int nCount)
{
	if (nCount <= 1)
		return;

	for (int i = 0; i < nCount; i++)
	{
		for (int j = 0; j < nCount; j++)
		{
			if (pData[i] < pData[j])
			{
				int nTemp = pData[i];
				pData[i] = pData[j];
				pData[j] = nTemp;
			}
		}
	}
}

int main()
{
	tArr t;
	InitArr(&t);

	//����.
	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		int nRand = rand() % 100 + 1;
		PushBack(&t, nRand);
	}
	for (int i = 0; i < t.nCount; i++)
	{
		printf("%d\n", t.nPtr[i]);
	}
	printf("������\n");

	int iArr[] = { 87,66,55,100,1,5,10,8,9,99 };
	Sort(&t, BubbleSort);

	for (int i = 0; i < t.nCount; i++)
	{
		printf("%d\n", t.nPtr[i]);
	}

	return 0;
}