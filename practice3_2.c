#include <stdio.h>

int main(void)
{
	char wd1 = 0;
	char wd2 = 0;
	char wd3 = 0;
	char wd4 = 0;

	printf("�� ������ ���ܾ �Է��Ͻÿ�. : ");
	wd1 = getchar();
	wd2 = getchar();
	wd3 = getchar();
	wd4 = getchar();
	
	printf("�ܾ��� �ι�° ���縵�� ������ �����ϴ� : %c\n", wd2);

	return 0;
}