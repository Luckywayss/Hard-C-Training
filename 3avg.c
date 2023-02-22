//세 정수를 입력받아 총합을 출력하는 프로그램
//새로운 변수 금지
//printf 함수 수정 금지
//반드시 '+=' 복합연산자 사용
#include <stdio.h>

int main(void)
{
	int nInput, nTotal = 0;

	scanf("%d", &nInput);
	nTotal += nInput;
	scanf("%d", &nInput);
	nTotal += nInput;
	scanf("%d", &nInput);
	nTotal += nInput;

	printf("Total : %d\n", nTotal);
	return 0;
}