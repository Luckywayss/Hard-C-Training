#include <stdio.h>

int main(void)
{
	int count = 0, number = 0;

	//5ȸ �ݺ��Ǵ� �ٱ��� �ݺ���
	for (count = 0; count < 5; ++count)
	{
		printf("count == %d\n", count);
		
		//5ȸ �ݺ� ������ ���� ���� �ݺ���
		for (number = 0; number < 5; ++number)
		{
			//break���� ����Ǹ� ���� �ݺ����� ��� ������.
			if (number > 2) break;
			printf("\t%dth\n", number);
		}
		printf("end\n\n");
	}

	return 0;
}