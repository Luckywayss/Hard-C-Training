#include <stdio.h>

int main(void)
{
	int nNumber = 0;	//1���� 100����
	int nResult = 0;	//4�� ��� ����
	int nxResult = 0;
	int sum = 0;

	for (nNumber = 1; nNumber <= 100; ++nNumber) nResult = nNumber / 4;
	
	nxResult = nResult;

	for (; nResult > 0; --nResult) sum = sum + nResult * 4;
	
	printf("1~100�������� 4�� ����� �� '%d'��\n�̵��� ������ '%d'�Դϴ�. End", nxResult, sum);
	
	return 0;
}

