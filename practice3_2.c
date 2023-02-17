#include <stdio.h>

int main(void)
{
	char wd1 = 0;
	char wd2 = 0;
	char wd3 = 0;
	char wd4 = 0;

	printf("네 글자인 영단어를 입력하시오. : ");
	wd1 = getchar();
	wd2 = getchar();
	wd3 = getchar();
	wd4 = getchar();
	
	printf("단어의 두번째 스펠링은 다음과 같습니다 : %c\n", wd2);

	return 0;
}