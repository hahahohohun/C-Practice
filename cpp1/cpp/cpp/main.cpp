using namespace std;
#include <iostream>
#include <string.h>

int main()
{
	int a = 1;
	int b = 20;
	//const ������. ����Ű�� ���� ���ȭ.
	const int* pConstInt = &a;
	//*pConstInt = 100; //�Ұ���.
	pConstInt = &b;

	//������ const.
	int* const pIntConst = &a;
	*pIntConst = 200;
	//pIntConst = &b; //�Ұ���.

}

