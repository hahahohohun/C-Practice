#pragma once

typedef struct _tabArr
{
	int* nPtr;
	int nCount;
	int nMaxCount;
}tArr;

//�迭 �ʱ�ȭ.
void InitArr(tArr* parr);

//������ �߰�
void PushBack(tArr* parr, int nData);

//���� ���Ҵ�.
void Reallocate(tArr* parr);

//�޸�����.
void ReleaseArr(tArr* parr);