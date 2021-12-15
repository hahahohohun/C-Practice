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

int main()
{
	wchar_t szString[100] = L"abc";
	//wcscat_s(szString, 100, L"def");
	StrCat(szString, 100, L"def");

	printf("%d", GetLength(szString));
}


