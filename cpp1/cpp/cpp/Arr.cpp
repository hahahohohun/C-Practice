#include "Arr.h"
#include <iostream>

void InitArr(tArr* parr)
{
	parr->nPtr = (int*)malloc(sizeof(int) * 2); //8보다는 int라는 사이즈를 명확하게 표현하기위해sizeof(int) 
	parr->nCount = 0;
	parr->nMaxCount = 2;
}

void PushBack(tArr* parr, int nData)
{
	//힙 영역에 할당한 공간이 다 참
	if (parr->nMaxCount <= parr->nCount)
	{
		//재할당
		Reallocate(parr);
	}

	//데이터 추가
	parr->nPtr[parr->nCount++] = nData;
}

void Reallocate(tArr* parr)
{
	//1. 2배 더 큰 공간을 동적할당.
	int* pNew = (int*)malloc(parr->nMaxCount * 2 * sizeof(int));

	//2. 기존 공간에 있던 데이터들을 새로 할당한 공간으로 복사.
	for (int i = 0; i < parr->nCount; ++i)
	{
		pNew[i] = parr->nPtr[i];
	}

	//3. 기존 공간은 메모리 해제.
	free(parr->nPtr);
	//4. 배열이 새로 할당된 공간을 가리키게 한다.
	parr->nPtr = pNew;
	//5. MaxCount 변경점 적용
	parr->nMaxCount *= 2;
}

void ReleaseArr(tArr* parr)
{
	free(parr->nPtr);
	parr->nCount = 0;
	parr->nMaxCount = 0;
}


//오름차순 정렬
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


