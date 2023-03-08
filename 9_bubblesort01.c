#include <stdio.h>

int main(void)
{
	int aList[5] = { 30, 40, 10, 50, 20 };
	int i = 0, j = 0, nTmp = 0;

	//code
	for (i = 0; i < 5; ++i)
		for (j = 1 + i; j < 5; ++j)
			if (aList[i] > aList[j])
			{
				nTmp = aList[j];
				aList[j] = aList[i];
				aList[i] = nTmp;
			}

	//do not revise
	for (i = 0; i < 5; ++i)
		printf("%d\t", aList[i]);
	putchar('\n');
	return 0;
}