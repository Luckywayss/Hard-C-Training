#include <stdio.h>

int main(void)
{
	int y = 0, x = 0;			//y = ї­ x = За
	
	for(y = 0; y < 5; ++y)
	{
		x = 0;

		for (x = 0; x < 5; ++x)
		{
			if(x >= 4 - y) printf("\t*\t");
			else printf("\t");
		}

		putchar('\n');
	}

	return 0;
}