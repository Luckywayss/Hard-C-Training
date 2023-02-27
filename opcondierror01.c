#include <stdio.h>

int main(void)
{
	int nInput = 0, nSelect = 0;

	scanf_s("%d", &nInput);

	/*nInput <= 10 ? nSelect = 10 : nSelect = 20;
	printf("%d\n", nSelect);*/ //에러코드

	nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
	printf("%d\n", nSelect);

	/*nSelect = 20;
	printf("%d", nSelect);*/

	return 0;
}