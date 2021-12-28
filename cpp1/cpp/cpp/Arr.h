#pragma once

typedef struct _tabArr
{
	int* nPtr;
	int nCount;
	int nMaxCount;
}tArr;

//배열 초기화.
void InitArr(tArr* parr);

//데이터 추가
void PushBack(tArr* parr, int nData);

//공간 재할당.
void Reallocate(tArr* parr);

//메모리해제.
void ReleaseArr(tArr* parr);