#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	//������� 2���� �迭 �ݺ���(5�� �̻� ����)
	for (i = 0; i < 5; ++i)
	{
		if (i % 2 == 0)
			for (j = 0; j < 5; ++j)
				aList[i][j] = ++nCounter;
		else
			for(j = 4; j >= 0; --j)
				aList[i][j] = ++nCounter;
	}
		
	//��� �κ�
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}

	int fuck = 0;
	fuck = 1 % 2;

	return 0;
}