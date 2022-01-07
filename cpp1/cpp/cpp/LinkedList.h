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

//할당.
void InitList(tLinkedList* pList);
//데이터 추가(맨 뒤에).
void PushBack(tLinkedList* pList, int ndata);
//메모리 해제.
void ReleaseList(tLinkedList* pList);

