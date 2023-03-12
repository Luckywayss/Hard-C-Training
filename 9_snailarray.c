#include <stdio.h>

int main(void) 
{
	int aList[5][5] = { 0 };
	int i = 0, j = 0, nNumber = 0, Count = 0;
	int R_flag = 1, L_flag = 0, Down_Flag = 0, Up_flag = 0;
	//R = ++j, L = --j, Down = ++i, Up = --i 
	
	for (Count = 0; Count < 25; ++Count)
	{
		if(R_flag)
	}
		
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%d\t", aList[i][j]);
		putchar('\n');
	}
	
	return 0;
}