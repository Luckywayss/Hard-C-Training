#include <stdio.h>

int main(void)
{
	int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput, sizeof(nInput));
	bResult = 3 < nInput < 20;
	printf("Result : %d (1:True, 0:False)\n", bResult);
	
	return 0;
}