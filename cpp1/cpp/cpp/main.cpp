using namespace std;
#include <iostream>
#include <string.h>
struct  tag_Friend
{
	char Name[10];
	int Age;
	double Height;
};

int main()
{
	
	short sArr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pI = (int*)sArr;
	int iData = *((short*)(pI + 2));
	printf("%d\n", iData); //답은 5.

	char cArr[2] = { 1,1 };
	short* pS = (short*)cArr;
	iData = *pS;
	printf("%d", iData); //답은 257/
}
