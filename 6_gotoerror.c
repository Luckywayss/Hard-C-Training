#include <stdio.h>

int main(void)
{
	int nAge = 0;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &nAge);

	if (nAge < 0)
		goto ERROR;
	else if (nAge > 150)
		goto ERROR;
	
	printf("������: ");
	return 0;>>>>

ERROR:
	puts("�߸� �Է� �Ͽ����ϴ�!");
	return -1;
}