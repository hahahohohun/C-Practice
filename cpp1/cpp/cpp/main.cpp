using namespace std;
#include <iostream>
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

	for (int i = 0; i < 10; i++)
	{
		PushBack(&t, 1);
	}


	ReleaseArr(&t);

	return 0;
}