#include <stdio.h>

int main(void)
{
	int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput, sizeof(nInput));
	//사용자가 입력한 값이 0이 아니면 참이다.
	//그러므로 사용자가 0을 입력하면 거짓이나, ! 연산을 수행해 참이 된다.
	bResult = !nInput;
	printf("Result : %d (1:True, 2:False)\n", bResult);
	
	return 0;
}