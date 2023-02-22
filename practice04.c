#include <stdio.h>

int main(void)
{
	int nInput;
	scanf_s("%d", &nInput, sizeof(nInput));
	printf("%d", nInput % 5);
	return 0;
}