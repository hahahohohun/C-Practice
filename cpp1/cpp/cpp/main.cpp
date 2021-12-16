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
	//�־��� ���� ���̺��� ���.
	if (nBufferSize < nDesLength + nSourceLength + 1) //+1 : null ���� �������� ���
	{
		assert(nullptr);
	}

	// ���ڿ� �̾� ���̱�.
	// 1. Dest���ڿ��� ���� Ȯ��(���ڿ��� �̾� ���� ���� ��ġ)

	// 2. �ݺ������� Src ���ڿ��� Dest�� ��ġ�� �����ϱ�
	// 3. Src ���ڿ��� ���� ������ �ݺ� ����
	for (int i = 0; i < nSourceLength + 1; i++)
	{
		if (pDest[nDesLength + i] == '\0')
		{
			pDest[nDesLength + i] = source[i];
		}
	}
}

//���� ��� :0.
//������ Ŭ��� 1.
//�������� Ŭ��� -1.
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


