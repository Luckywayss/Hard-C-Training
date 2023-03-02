#include <stdio.h>

int main(void)
{
	int count = 0, number = 0;

	//5회 반복되는 바깥쪽 반복문
	for (count = 0; count < 5; ++count)
	{
		printf("count == %d\n", count);
		
		//5회 반복 조건을 갖춘 안쪽 반복문
		for (number = 0; number < 5; ++number)
		{
			//break문이 적용되면 안쪽 반복문을 즉시 끝낸다.
			if (number > 2) break;
			printf("\t%dth\n", number);
		}
		printf("end\n\n");
	}

	return 0;
}