#include <stdio.h>

int main(void)
{
	int nAge = 0, fare = 0;

	printf("����� ���� : ");
	scanf_s("%d", &nAge);

	if (nAge <= 3)			fare = 0;
	else if (nAge <= 13)	fare = 1000 - 500;
	else if (nAge <= 19)	fare = 1000 - 250;
	else if (nAge >= 65)	fare = 0;
	else fare = 1000;
	
	printf("���� ��� : %d\n", fare);

	return 0;
}