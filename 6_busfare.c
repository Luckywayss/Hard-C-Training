#include <stdio.h>

int main(void)
{
	int busfare = 0;
	int nAge = 0;
	
	printf("당신의 나이는 : ");
	scanf_s("%d", &nAge);

	/*
	0~3세	영유아	할인율	100%(무료)
	4~13세	어린이	할인율	50%
	14~19세	청소년	할인율	25%
	20세		성인		할인율	0%
	*/

	if (nAge <= 3) busfare = 0; //영유아
	else{
		if (nAge <= 13) busfare = 1000 - 500; //어린이
		else {
			if (nAge <= 19) busfare = 1000 - 250; //청소년
			else busfare = 1000; //성인
		}
	}

	printf("요금 : %d", busfare);
	
	return 0;
}