using namespace std;
#include <iostream>
#include <string.h>
#include <cassert>

unsigned int GetLength(const wchar_t* pDest)
{
	int nIdx = 0;
	while (true)
	{
		if (pDest[nIdx] == '\0')
			break;
		nIdx++;
	}

	return nIdx;
}

void StrCat(wchar_t* pDest, unsigned int nBufferSize, const wchar_t* source)
{
	int nDesLength = GetLength(pDest);
	int nSourceLength = GetLength(source);
	//주어진 버퍼 길이보다 길면.
	if (nBufferSize < nDesLength + nSourceLength + 1) //+1 : null 문자 공간까지 계산
	{
		assert(nullptr);
	}

	// 문자열 이어 붙이기.
	// 1. Dest문자열의 끝을 확인(문자열이 이어 붙을 시작 위치)

	// 2. 반복적으로 Src 문자열을 Dest끝 위치에 복사하기
	// 3. Src 문자열의 끝을 만나면 반복 종료
	for (int i = 0; i < nSourceLength + 1; i++)
	{
		if (pDest[nDesLength + i] == '\0')
		{
			pDest[nDesLength + i] = source[i];
		}
	}
}

//같을 경우 :0.
//왼쪽이 클경우 1.
//오른쪽이 클경우 -1.
int StrCmp(const wchar_t* pLeft, const wchar_t* pRight)
{
	int nLeftLength = GetLength(pLeft);
	int nRightLength = GetLength(pRight);
	int nLoop = nLeftLength > nRightLength ? nRightLength : nLeftLength;
	int nReturn = 0;

	if (nLeftLength > nRightLength)
	{
		nReturn = 1;
	}
	else if (nLeftLength < nRightLength)
	{
		nReturn = -1;
	}

	for (int i = 0; i < nLoop; i++)
	{
		if (pLeft[i] < pRight[i])
		{
			return -1;
		}
		else if (pLeft[i] > pRight[i])
		{
			return 1;
		}
	}

	return nReturn;
}

int main()
{
	int n = StrCmp(L"gbg", L"abb");

	printf("%d", n);
}


