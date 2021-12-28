using namespace std;
#include <iostream>
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

	for (int i = 0; i < 10; i++)
	{
		PushBack(&t, 1);
	}


	ReleaseArr(&t);

	return 0;
}