#include <stdio.h>

int main(void)
{
	char nameData[32] = { 0 };
	int ageData = 0;
	
	printf("����� �̸���? : ");
	gets_s(nameData, sizeof(nameData));
	printf("����� ���̴�? : ");
	scanf_s("%d", &ageData, sizeof(ageData));

	printf("����� �̸��� %s, ���̴� %d�Դϴ�.\n", nameData, ageData);

	return 0;
}