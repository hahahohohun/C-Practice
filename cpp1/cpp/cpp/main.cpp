using namespace std;
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "Arr.h"

// 변수
// 지역(스택)
// 전역,정적,외부(데이터)

//메모리 영역
// 스택
// 데이터
// ROM
// 힙 영역(동적할당)

int main()
{
	tArr t;
	InitArr(&t);

	//난수.
	srand(time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		int nRand = rand() % 100 + 1;
		PushBack(&t, nRand);
	}

	Sort(&t);

	for (int i = 0; i < t.nCount; i++)
	{
		printf("%d\n", t.nPtr[i]);
	}

	ReleaseArr(&t);

	return 0;
}