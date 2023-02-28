#include <stdio.h>

int main(void)
{
	int nInput = 0;
	int nMax = 0;

	scanf_s("%d", &nMax);
	if (nMax > 100) nMax = 100;
	if (nMax < 0) nMax = 0;
	
	scanf_s("%d", &nInput);
	if (nInput > 100) nInput = 100;
	if (nInput < 0) nInput = 0;
	if (nInput > nMax) nMax = nInput;
	
	scanf_s("%d", &nInput);
	if (nInput > 100) nInput = 100;
	if (nInput < 0) nInput = 0;
	if (nInput > nMax) nMax = nInput;
	
	scanf_s("%d", &nInput);
	if (nInput > 100) nInput = 100;
	if (nInput < 0) nInput = 0;
	if (nInput > nMax) nMax = nInput;
	
	scanf_s("%d", &nInput);
	if (nInput > 100) nInput = 100;
	if (nInput < 0) nInput = 0;
	if (nInput > nMax) nMax = nInput;

	printf("MAX : %d", nMax);
	
	return 0;
}