#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�� ������ �Է��ϼ���. : ");
	scanf_s("%d%d", &x, &y, sizeof(x), sizeof(y));
	
	printf("AVG : %.2f\n", (x + y) / 2.0);
	return 0;
}