#include <stdio.h>

int main(void)
{
	int count = 0;

	//count가 10이 되면 반복문을 수행하지 않는다.
	for (count = 0; count < 10; ++count)
	{
		if (count > 4) continue;

		//count가 5가 되는 시점부터 이 코드는 수행되지 않는다!
		printf("%dth\n", count);
	}

	printf("END: count == %d\n", count);
	return 0;
}