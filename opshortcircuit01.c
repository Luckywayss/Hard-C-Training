#include <stdio.h>

int main(void)
{
	int nAge = 0, nHeight = 0;

	printf("���̸� �Է��ϼ���. : ");
	scanf_s("%d", &nAge);//scanf_s �Լ����� ���ڿ� �����͸� �Է¹��� ���� sizeof �Լ��� ����Ѵ�.
	printf("Ű�� �Է��ϼ���. : ");
	scanf_s("%d", &nHeight);

	//��� ���� ������ ���ʿ��� ���������� �����Ѵ�!
	//���� ���������� �� ������ �ʿ䰡 ���ٰ� �����Ǹ�
	//�������� ���� ������ ������ ������� ���� ����� ������.
	printf("��� : %d (1:�հ�, 0:���հ�)\n",
		nAge >= 20 && nAge <= 30 && nHeight >= 150
		);

	return 0;
}