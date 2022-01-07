#pragma once

typedef struct _tagNode
{
	int nData;
	struct _tagNode* pNextNode;
}tNode;

typedef struct _tagList
{
	tNode* pHeadNode;
	int nCount;

} tLinkedList;

//�Ҵ�.
void InitList(tLinkedList* pList);
//������ �߰�(�� �ڿ�).
void PushBack(tLinkedList* pList, int ndata);
//�޸� ����.
void ReleaseList(tLinkedList* pList);

