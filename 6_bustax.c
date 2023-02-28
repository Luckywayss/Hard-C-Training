#include <stdio.h>

int main(void)
{
	int bustax = 750, nAge = 0;
	
	printf("당신의 나이를 입력하세요. : ");
	scanf_s("%d", &nAge);

	if (nAge < 20)
		bustax = bustax * 75 / 100; //20세 이하일 경우 25% 할인

	printf("당신의 요금은 : %d원", bustax);

	return 0;
}