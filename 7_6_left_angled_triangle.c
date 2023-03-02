#include <stdio.h>

int main(void)
{
	int y = 0, x = 0, z = 0;

	for (y = 0; y < 5; ++y)
	{
		for (z = y; z < 4; ++z) printf("\t");
		for (x = 0; x <= y; ++x) printf("\t*");
			
		putchar('\n');
	}

	return 0;
}