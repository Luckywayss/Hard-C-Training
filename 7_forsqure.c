#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	//���� Index i, ������ �Ʒ��� ����
	for (i = 0; i < 5; ++i)
	{
		//���� Index j, ���ʿ��� ���������� ����
		for (j = 0; j < 5; ++j)
			printf("*\t");

		//�� �࿡ *�� ��� ����� �� �����Ѵ�.
		putchar('\n');
	}

	return 0;
}