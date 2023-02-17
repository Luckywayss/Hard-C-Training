#include <stdio.h>

int main(void)
{
	int ageData = 0;
	char nameData[32] = { 0 };

	printf("나이를 입력하세요 : ");
	scanf_s("%d%*c", &ageData, sizeof(ageData));
	printf("이름을 입력하세요 : ");
	gets_s(nameData, sizeof(nameData));
	
	printf("당신의 나이는 %d살이고 이름은 '%s'입니다.\n", ageData, nameData);
	
	return 0;
}