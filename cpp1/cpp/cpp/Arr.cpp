#include "Arr.h"
#include <iostream>

void InitArr(tArr* parr)
{
	parr->nPtr = (int*)malloc(sizeof(int) * 2); //8���ٴ� int��� ����� ��Ȯ�ϰ� ǥ���ϱ�����sizeof(int) 
	parr->nCount = 0;
	parr->nMaxCount = 2;
}

void PushBack(tArr* parr, int nData)
{
	//�� ������ �Ҵ��� ������ �� ��
	if (parr->nMaxCount <= parr->nCount)
	{
		//���Ҵ�
		Reallocate(parr);
	}

	//������ �߰�
	parr->nPtr[parr->nCount++] = nData;
}

void Reallocate(tArr* parr)
{
	//1. 2�� �� ū ������ �����Ҵ�.
	int* pNew = (int*)malloc(parr->nMaxCount * 2 * sizeof(int));

	//2. ���� ������ �ִ� �����͵��� ���� �Ҵ��� �������� ����.
	for (int i = 0; i < parr->nCount; ++i)
	{
		pNew[i] = parr->nPtr[i];
	}

	//3. ���� ������ �޸� ����.
	free(parr->nPtr);
	//4. �迭�� ���� �Ҵ�� ������ ����Ű�� �Ѵ�.
	parr->nPtr = pNew;
	//5. MaxCount ������ ����
	parr->nMaxCount *= 2;
}

void ReleaseArr(tArr* parr)
{
	free(parr->nPtr);
	parr->nCount = 0;
	parr->nMaxCount = 0;
}


//�������� ����
void Sort(tArr* parr)
{
	if (parr->nCount <= 1)
		return;

	for (int i = 0; i < parr->nCount; i++)
	{
		for (int j = 0; j < parr->nCount; j++)
		{
			if (parr->nPtr[i] < parr->nPtr[j])
			{
				int nTemp = parr->nPtr[i];
				parr->nPtr[i] = parr->nPtr[j];
				parr->nPtr[j] = nTemp;
			}

		}

	}

}


