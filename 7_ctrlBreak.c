#include <stdio.h>

int main(void)
{
	int count = 0;

	//for���� count�� 9�� �� ������ �ݺ��Ѵ�.
	for (count = 0; count < 10; ++count)
	{
		//count ���� 5�� �Ǹ� break���� ����ǰ� for���� �����.
		if (count > 4) break;

		printf("%dth\n", count);
	}

	//break���� ����� ������ ����� ���� ����Ѵ�.
	printf("END: count == %d\n", count);
	return 0;
}