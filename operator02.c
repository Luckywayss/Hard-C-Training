#include <stdio.h>

int main(void)
{
	int nResult = 0;

	nResult = 3 + 4; //임시결과 7을 변수에 담아둔다.
	printf("nResult : %d\n", nResult);
	printf("nResult - 5 : %d\n", nResult - 5); //변수에 담아둔 정보를 다시 꺼내 연산한다.
	return 0;
}