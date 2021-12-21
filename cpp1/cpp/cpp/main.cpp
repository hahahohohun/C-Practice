//using namespace std;
#include <iostream>
#include <wchar.h>
#define INF 100000

int arr[INF];
int count = 0;

void AddBack(int n)
{
	arr[count] = n;
	count++;
}

void AddFirst(int n)
{
	for (int i = count; i >= 1; i--)
	{
		arr[i] = arr[i - 1];
	}
	arr[0] = n;
	count++;
}

void AddAtIndex(int nIdx, int nData)
{
	for (int i = count; i >= nIdx; i--)
	{
		int nTempData = arr[i];
		arr[i + 1] = nTempData;
	}
	arr[nIdx] = nData;
}

void RemoveFirst()
{
	printf("昏力等 data %d\n", arr[0]);
	for (int i = 1; i < count; i++)
	{
		arr[i - 1] = arr[i];
	}
	arr[count - 1] = 0;
	count--;
}

void RemoveBack()
{
	printf("昏力等 data %d\n", arr[count - 1]);
	arr[count - 1] = 0;
	count--;
}

void Show()
{
	int i = 0;
	while (true)
	{
		if (arr[i] == 0)
		{
			break;
		}
		printf("%d\n", arr[i]);
		i++;
	}

}

int main()
{
	//AddFirst(1);
	//AddFirst(2);
	//AddFirst(3);
	AddBack(1);
	AddBack(2);
	AddBack(3);
	AddBack(4);
	RemoveFirst();
	RemoveBack();
	Show();
}