#include <stdio.h>

int main(void)
{
	int nHeight = 0; 
	
	printf("당신의 키를 입력하세요. : ");
	scanf_s("%d", &nHeight);

	printf("결과 : %s", nHeight >= 150 ? "합격" : "불합격");

	return 0;
}