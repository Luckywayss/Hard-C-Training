#include <stdio.h>

int main(void)
{
	int x = 0, ninput = 0;
	scanf("%d", &ninput);

	//ninput ������ ����� ����ڰ� �Է��� ���� x�� �����Ѵ�.
	//x�� ����ִ� ���� Overwrite�ǰ� �������.
	x = ninput;
	printf("%d\n", x);
	return 0;
}