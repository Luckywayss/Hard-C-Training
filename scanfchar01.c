#include <stdio.h>

int main(void)
{
	char nameData[32] = { 0 };
	int ageData = 0;
	
	printf("당신의 이름은? : ");
	gets_s(nameData, sizeof(nameData));
	printf("당신의 나이는? : ");
	scanf_s("%d", &ageData, sizeof(ageData));

	printf("당신의 이름은 %s, 나이는 %d입니다.\n", nameData, ageData);

	return 0;
}