using namespace std;
#include <iostream>

int main()
{
	int nRandom = 0; // ������ ���� ����
	int nInput = 0;
	nRandom = rand() % 9 + 1;
	for (;;)
	{
		do
		{
			printf("���ڸ� �Է��ϼ���");
			scanf_s("%d", &nInput);

			if (nInput == 999)
				exit(0);
			if (nInput == nRandom)
			{
				printf("������ϴ�.\n");
				exit(0);

			}
			else if (nInput > nRandom)
			{
				printf("�Է��� ���ں��� �۽��ϴ�.\n");
			}
			else
			{
				printf("�Է��� ���ں��� Ů�ϴ�.\n");
			}
		} while (nInput != nRandom);
	}
}
