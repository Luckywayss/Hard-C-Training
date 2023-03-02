#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	//행의 Index i, 위에서 아래로 진행
	for (i = 0; i < 5; ++i)
	{
		//열의 Index j, 왼쪽에서 오른쪽으로 진행
		for (j = 0; j < 5; ++j)
			printf("*\t");

		//한 행에 *을 모두 출력한 후 개행한다.
		putchar('\n');
	}

	return 0;
}