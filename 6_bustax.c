#include <stdio.h>

int main(void)
{
	int bustax = 750, nAge = 0;
	
	printf("����� ���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);

	if (nAge < 20)
		bustax = bustax * 75 / 100; //20�� ������ ��� 25% ����

	printf("����� ����� : %d��", bustax);

	return 0;
}