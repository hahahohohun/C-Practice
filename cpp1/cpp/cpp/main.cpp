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

	Sort(&t);

	for (int i = 0; i < t.nCount; i++)
	{
		printf("%d\n", t.nPtr[i]);
	}

	ReleaseArr(&t);

	return 0;
}