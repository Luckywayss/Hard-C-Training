#include <stdio.h>

int main(void)
{
	int nHeight = 0; 
	
	printf("����� Ű�� �Է��ϼ���. : ");
	scanf_s("%d", &nHeight);

	printf("��� : %s", nHeight >= 150 ? "�հ�" : "���հ�");

	return 0;
}