#include <stdio.h>

int main(void)
{
	int nInput = 0, nSelect = 0;
	scanf_s("%d", &nInput);

	//���ǽ��� ���̸� nSelect = 10�� �ǰ� �����̸� nSelect = 20�� �ȴ�.
	nSelect = nInput <= 10 ? 10 : 20;
	printf("%d\n", nSelect);

	return 0;
}