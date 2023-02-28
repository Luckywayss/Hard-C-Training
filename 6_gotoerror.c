#include <stdio.h>

int main(void)
{
	int nAge = 0;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &nAge);

	if (nAge < 0)
		goto ERROR;
	else if (nAge > 150)
		goto ERROR;
	
	printf("요금출력: ");
	return 0;>>>>

ERROR:
	puts("잘못 입력 하였습니다!");
	return -1;
}