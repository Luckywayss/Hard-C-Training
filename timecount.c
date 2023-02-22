#include <stdio.h>

int main(void)
{
	//3600 = 1h, 360 = 60m 60 = 1m
	int nSec = 0;
	
	printf("초(s) 입력 : ");
	scanf_s("%d", &nSec, sizeof(nSec));
	
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n",
		nSec,
		nSec / 3600,
		nSec % 3600 / 60,
		nSec % 60);

	return 0;
}