#include <stdio.h>

int main(void)
{
	int nInput = 0;
	printf("������ �Է��ϼ���. : ");

	//����ڷκ��� ������ �Է¹޴´�.
	scanf_s("%d", &nInput, sizeof(nInput));
	//���� ����ڰ� 0�� �Է��Ѵٸ� 10�� 0���� ������ �Ѵ�.
	printf("%d\n", 10 / nInput);
	return 0;
}
