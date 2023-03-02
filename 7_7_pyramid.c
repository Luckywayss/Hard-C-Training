#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;			//i = ї­ j = За

	for (i = 0; i < 5; ++i)		
	{
		for (j = 0; j < 5 + i; ++j)
		{
			if (i + j >= 4)	printf("*\t");
			else			putchar('\t');
		}

		putchar('\n');
	}
	
	return 0;
}