#include <stdio.h>

int main(void)
{
	int nNumber = 0;	//1부터 100까지
	int nResult = 0;	//4의 배수 갯수
	int nxResult = 0;
	int sum = 0;

	for (nNumber = 1; nNumber <= 100; ++nNumber) nResult = nNumber / 4;
	
	nxResult = nResult;

	for (; nResult > 0; --nResult) sum = sum + nResult * 4;
	
	printf("1~100까지에서 4의 배수는 총 '%d'개\n이들의 총합은 '%d'입니다. End", nxResult, sum);
	
	return 0;
}

