#include <stdio.h>

int main(void)
{
	int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput, sizeof(nInput));
	bResult = nInput < 4 || nInput >= 60;
	printf("Result : %d (4 �̸� 60 �̻� 1:True, �׷��� ������ 0:False)\n", bResult);
	return 0;
}