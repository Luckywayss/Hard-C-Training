#include <stdio.h>

int main(void)
{
	int nInput;
	scanf_s("%d", &nInput);

	int i = 0;
	while (i < nInput)
	{
		putchar('*');
		++i;
	}

	putchar('\n');
	return 0;
}