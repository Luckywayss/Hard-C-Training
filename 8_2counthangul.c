#include <stdio.h>

int main(void)
{
	char szBuffer[64] = { 0 };
	int nLength = 0;

	do

	{
		nLength = 0;
		printf("한글 10자 이내로 입력하세요 : ");
		gets(szBuffer);

		while (szBuffer[nLength] != '\0')
			++nLength;

	} while (nLength > 20);

	printf("한글 문자의 개수는 %d자 입니다.\n", nLength / 2);

	return 0;
}
