#include <stdio.h>

int main(void)
{
	int nInput, nMax = 0;

	scanf_s("%d", &nMax);

	scanf_s("%d", &nInput);
	if (nInput > nMax) nMax = nInput;

	scanf_s("%d", &nInput);
	if (nInput > nMax) nMax = nInput;
	
	printf("Max : %d", nMax);

	return 0;
}