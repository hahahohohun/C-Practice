using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "Arr.h"
#include "LinkedList.h"
// 변수
// 지역(스택)
// 전역,정적,외부(데이터)

//메모리 영역
// 스택
// 데이터
// ROM
// 힙 영역(동적할당)

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
	tLinkedList list = {};
	InitList(&list);
	PushBack(&list, 100);
	PushBack(&list, 200);
	PushBack(&list, 300);

	tNode* node = list.pHeadNode;
	for (int i = 0; i < list.nCount; i++)
	{
		printf("%d\n", node->nData);
		node = node->pNextNode;
	}

	ReleaseList(&list);
	return 0;
}