#include <stdio.h>

int main(void)
{
	int ageData = 0;
	char nameData[32] = { 0 };

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d%*c", &ageData, sizeof(ageData));
	printf("�̸��� �Է��ϼ��� : ");
	gets_s(nameData, sizeof(nameData));
	
	printf("����� ���̴� %d���̰� �̸��� '%s'�Դϴ�.\n", ageData, nameData);
	
	return 0;
}