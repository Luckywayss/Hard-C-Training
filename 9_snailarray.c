#include <stdio.h>

int main(void) 
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, Number = 0, Count = 0;
	int R_flag = 1, L_flag = 0, Down_flag = 0, Up_flag = 0;
	//R = ++j, L = --j, Down = ++i, Up = --i 
	
	for (Count = 0; Count < 3; ++Count)
	{
		if (R_flag)
		{
			for (; j < 4 - Count; ++j)//for, while, if 문은 조건식이 참 일때 수행
				aList[i][j] = ++Number;
			Down_flag = 1;
			R_flag = 0;
		}
		if (Count < 2)
		{
			if (Down_flag)
			{
				for (; i < 4 - Count; ++i)
					aList[i][j] = ++Number;
				Down_flag = 0;
				L_flag = 1;
			}
			if (L_flag)
			{
				for (; j > 0 + Count; --j)
					aList[i][j] = ++Number;
				Up_flag = 1;
				L_flag = 0;
			}
			if (Up_flag)
			{
				for (; i > 1 + Count; --i)
					aList[i][j] = ++Number;
				R_flag = 1;
				Up_flag = 0;
			}
		}
	}

	aList[2][2] = 25;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	
	return 0;
}
