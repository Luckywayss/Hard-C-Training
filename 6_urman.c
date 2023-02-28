#include <stdio.h>

int main(void)
{
	int nAge = 0;

	scanf_s("%d", &nAge);
	if (nAge == 20)
		puts("당신은 성인입니다.");

	puts("End");
	
	return 0;
}