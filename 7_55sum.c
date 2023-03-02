#include <stdio.h>

int main(void)
{
	int nInput = 2, nResult = 1;

	while (nInput <= 10)
	{
		nResult = nResult + nInput; //1+2 
		++nInput;
	}

	printf("%d", nResult);

	return 0;
}