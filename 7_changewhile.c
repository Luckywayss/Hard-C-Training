#include <stdio.h>

//���� �ڵ带 goto���� �����ϰ� while������
/*int main(void)
{
	int nInput;

INPUT:
	printf("Input number : ");
	scanf_s("%d", &nInput);

	if (nInput < 0 || nInput > 10)	//nInput�� 0���� �۰ų� 10���� Ŭ �� ���� ������ �����Ѵ�.
		goto INPUT;

	puts("End");
	return 0;
}*/

int main(void)
{
	int nInput = 0;
	
	do
	{
		printf("Input number : ");
		scanf_s("%d", &nInput);
	}while (nInput < 10 || nInput > 10);	//nInput�� 10���� �۰ų� 10���� Ŭ �� ���� ������ �ݺ��Ѵ�.
	
	puts("END");
	return 0;
}