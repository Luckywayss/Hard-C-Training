#include <stdio.h>

int main(void)
{
	char szBuffer[64] = { 0 };
	int nLength = 0;

	do

	{
		nLength = 0;
		printf("�ѱ� 10�� �̳��� �Է��ϼ��� : ");
		gets(szBuffer);

		while (szBuffer[nLength] != '\0')
			++nLength;

	} while (nLength > 20);

	printf("�ѱ� ������ ������ %d�� �Դϴ�.\n", nLength / 2);

	return 0;
}
