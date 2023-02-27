#include <stdio.h>

int main(void)
{
	int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput, sizeof(nInput));
	bResult = nInput < 4 || nInput >= 60;
	printf("Result : %d (4 미만 60 이상 1:True, 그렇지 않으면 0:False)\n", bResult);
	return 0;
}