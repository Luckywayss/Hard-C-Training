#include <stdio.h>

int main(void)
{
	//3600 = 1h, 360 = 60m 60 = 1m
	int nSec = 0;
	
	printf("��(s) �Է� : ");
	scanf_s("%d", &nSec, sizeof(nSec));
	
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.\n",
		nSec,
		nSec / 3600,
		nSec % 3600 / 60,
		nSec % 60);

	return 0;
}