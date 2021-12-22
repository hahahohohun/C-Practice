//using namespace std;
#define _CRT_SECURE_NO_WARINGS
#include <stdlib.h>
#include <stdio.h>
#define INF 100000

typedef struct SNode
{
	int data;
	struct SNode* pre;
	struct SNode* next;
};

SNode* head;
SNode* tail;

//오름 차순.
void Insert(int nData)
{
	SNode* sCurNode = head->next;
	while (sCurNode->data < nData && sCurNode != tail)
	{
		sCurNode = sCurNode->next;
	}

	SNode* sNewNode = (SNode*)malloc(sizeof(SNode));
	sNewNode->data = nData;
	SNode* preNode = sCurNode->pre;
	preNode->next = sNewNode;
	sNewNode->pre = preNode;
	sNewNode->next = sCurNode;
	sCurNode->pre = sNewNode;
}
//맨앞 노드 제거.
void RemoveFront()
{
	if (head->next == tail)
		printf_s("값이 있는 노드가 없음");

	SNode* sRemoveNode = head->next;
	head->next = sRemoveNode->next;
	free(sRemoveNode);
}

void ShowAll()
{
	SNode* sCurNode = head->next;
	while (true)
	{
		if (sCurNode == tail)
		{
			break;
		}
		printf_s("%d\n",sCurNode->data);
		sCurNode = sCurNode->next;
	}
}

//오름차순
int main()
{
	head = (SNode*)malloc(sizeof(SNode));
	tail = (SNode*)malloc(sizeof(SNode));
	head->next = tail;
	tail->pre = head;
	tail->next = nullptr;
	Insert(1);
	Insert(3);
	Insert(5);
	Insert(2);
	RemoveFront();
	ShowAll();

}