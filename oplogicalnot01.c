#include <stdio.h>

int main(void)
{
	int nInput = 0, bResult = 0;

	scanf_s("%d", &nInput, sizeof(nInput));
	//����ڰ� �Է��� ���� 0�� �ƴϸ� ���̴�.
	//�׷��Ƿ� ����ڰ� 0�� �Է��ϸ� �����̳�, ! ������ ������ ���� �ȴ�.
	bResult = !nInput;
	printf("Result : %d (1:True, 2:False)\n", bResult);
	
	return 0;
}