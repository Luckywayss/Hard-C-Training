#include <stdio.h>

int main(void)
{
	int nMax = 0, nInput = 0;

	//ó�� �Է¹��� ���� �ϴ� �ִ��̴�.

	scanf_s("%d", &nInput);
	nMax = nInput;

	//������� Ȯ���� �ִ񰪰� ����ڰ� �Է��� ���� ���ϰ�
	//���ο� �ִ��� �����Ѵ�.
	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	//���� ���� ��� �ŵ��� ���� �ִ��� �����Ѵ�.
	scanf_s("%d", &nInput);
	nMax = nInput > nMax ? nInput : nMax;

	printf("MAX : %d\n", nMax);
	
	return 0;
}
