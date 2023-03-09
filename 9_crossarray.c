#include <stdio.h>

int main(void)
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nCounter = 0;

	//지그재그 2차원 배열 반복문(5번 이상 금지)
	for (i = 0; i < 5; ++i)
	{
		if (i % 2 == 0)
			for (j = 0; j < 5; ++j)
				aList[i][j] = ++nCounter;
		else
			for(j = 4; j >= 0; --j)
				aList[i][j] = ++nCounter;
	}
		
	//출력 부분
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