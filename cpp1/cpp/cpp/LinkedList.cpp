#include "LinkedList.h"
#include <iostream>

void InitList(tLinkedList* pList)
{
	pList->pHeadNode = nullptr;
	pList->nCount = 0;
}

void PushBack(tLinkedList* pList, int nData)
{
	tNode* tNewNode = (tNode*)malloc(sizeof(tNode));
	tNewNode->nData = nData;
	tNewNode->pNextNode = nullptr;

	if (pList->nCount == 0)
	{
		pList->pHeadNode = tNewNode;
	}
	else
	{
		tNode* curNode = pList->pHeadNode;

		while (true)
		{
			if (curNode->pNextNode == nullptr)
				break;
			curNode = curNode->pNextNode;
		}
		curNode->pNextNode = tNewNode;
	}
	pList->nCount++;

}

void Release(tNode* pNode)
{
	if (pNode == nullptr)
		return;
	Release(pNode->pNextNode);
	free(pNode);
}

void ReleaseList(tLinkedList* pList)
{
	//Àç±Í.
	//Release(pList->pHeadNode);

	tNode* node = pList->pHeadNode;
	for (int i = 0; i < pList->nCount; i++)
	{
		tNode* tNextNode = node->pNextNode;
		free(node);
		node = tNextNode;
	}

}
