#include <stdio.h>

int main(void)
{
	//�߰� ���� ���� ����, ���� �ڵ� ��� �ۼ�
	int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int i = 0, j = 0;

	//���⿡ �� �ڵ带 �ۼ��մϴ�.
	for (i = 0; i < 3; ++i)	//���� ����� �ݺ���
	{
		for (j = 0; j < 4; ++j)	//���� ����� �ݺ���
		{
			if (i <= 1) 
			{
				if (j < 3)
				{
					aList[i][3] += aList[i][j];
				}
			}
			if (i >= 2)
			{
				aList[i][j] = aList[0][j] + aList[1][j];
			}

			printf("%d\t", aList[i][j]);
		}

		putchar('\n');
	}
	return 0;
}

/*

��� �� :
	10 20 30 60
	40 50 60 150
	50 70 90 210

*/
