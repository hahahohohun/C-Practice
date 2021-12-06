using namespace std;
#include <iostream>

int main()
{
	int nRandom = 0; // 정수형 변수 선언
	int nInput = 0;
	nRandom = rand() % 9 + 1;
	for (;;)
	{
		do
		{
			printf("숫자를 입력하세요");
			scanf_s("%d", &nInput);

			if (nInput == 999)
				exit(0);
			if (nInput == nRandom)
			{
				printf("맞췄습니다.\n");
				exit(0);

			}
			else if (nInput > nRandom)
			{
				printf("입력한 숫자보다 작습니다.\n");
			}
			else
			{
				printf("입력한 숫자보다 큽니다.\n");
			}
		} while (nInput != nRandom);
	}
}
