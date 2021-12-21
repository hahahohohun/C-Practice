//using namespace std;
#define _CRT_SECURE_NO_WARINGS
#include <stdlib.h>
#include <stdio.h>
#define INF 100000

typedef struct SNode
{
	int data;
	struct SNode* next;
};

SNode* head;

void AddFront(SNode* sRootNode, int nData)
{
	SNode* sNewNode = (SNode*)malloc(sizeof(SNode));
	sNewNode->data = nData;

	sNewNode->next = sRootNode->next;
	//printf_s("[%d]", head->next->data);

	sRootNode->next = sNewNode;
}

void RemoveFront(SNode* sRootNode)
{
	SNode* sRemoveNode = sRootNode->next;
	sRootNode->next = sRootNode->next->next;
	free(sRemoveNode);
}

int main()
{
	head = (SNode*)malloc(sizeof(SNode));
	SNode* head2 = (SNode*)malloc(sizeof(SNode));
	head2->data = 3;
	head->next = head2;
	head2->next = nullptr;
	AddFront(head,1);
	AddFront(head,0);
	RemoveFront(head);

	SNode* curNode = head->next;

	while (true)
	{
		if (curNode == NULL)
		{
			break;
		}
		printf_s("%d\n", curNode->data);
		curNode = curNode->next;
	}
}