#include <stdio.h>

int main(void)
{
	int count = 1;
	int nInput = 0;
	int nResult = 0;

	scanf_s("%d", &nInput);
	if (nInput < 2 || nInput > 9) goto ERROR;

	while (count <= 9)
	{
		nResult = nInput * count;
		printf("%d * %d = %d\n", nInput, count, nResult);
		++count;
	}
	
	return 0;

ERROR:
	printf("ERROR");
	return -1;
}