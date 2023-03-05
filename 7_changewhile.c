#include <stdio.h>

//다음 코드를 goto문을 제거하고 while문으로
/*int main(void)
{
	int nInput;

INPUT:
	printf("Input number : ");
	scanf_s("%d", &nInput);

	if (nInput < 0 || nInput > 10)	//nInput이 0보다 작거나 10보다 클 때 다음 구문을 실행한다.
		goto INPUT;

	puts("End");
	return 0;
}*/

int main(void)
{
	int nInput = 0;
	
	do
	{
		printf("Input number : ");
		scanf_s("%d", &nInput);
	}while (nInput < 10 || nInput > 10);	//nInput이 10보다 작거나 10보다 클 때 다음 구문을 반복한다.
	
	puts("END");
	return 0;
}