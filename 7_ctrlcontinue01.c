#include <stdio.h>

int main(void)
{
	int count = 0;

	//count�� 10�� �Ǹ� �ݺ����� �������� �ʴ´�.
	for (count = 0; count < 10; ++count)
	{
		if (count > 4) continue;

		//count�� 5�� �Ǵ� �������� �� �ڵ�� ������� �ʴ´�!
		printf("%dth\n", count);
	}

	printf("END: count == %d\n", count);
	return 0;
}