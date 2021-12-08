using namespace std;
#include <iostream>
#include <string.h>

int main()
{
	int a = 1;
	int b = 20;
	//const 포인터. 가리키는 값을 상수화.
	const int* pConstInt = &a;
	//*pConstInt = 100; //불가능.
	pConstInt = &b;

	//포인터 const.
	int* const pIntConst = &a;
	*pIntConst = 200;
	//pIntConst = &b; //불가능.

}

