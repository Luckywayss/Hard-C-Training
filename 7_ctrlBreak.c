#include <stdio.h>

int main(void)
{
	int count = 0;

	//for문은 count가 9가 될 때까지 반복한다.
	for (count = 0; count < 10; ++count)
	{
		//count 값이 5가 되면 break문이 실행되고 for문을 벗어난다.
		if (count > 4) break;

		printf("%dth\n", count);
	}

	//break문이 적용된 순간의 계수기 값을 출력한다.
	printf("END: count == %d\n", count);
	return 0;
}