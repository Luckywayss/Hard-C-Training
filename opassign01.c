#include <stdio.h>

int main(void)
{
	int x = 0, ninput = 0;
	scanf("%d", &ninput);

	//ninput 변수에 저장된 사용자가 입력한 값을 x에 복사한다.
	//x에 들어있던 값은 Overwrite되고 사라진다.
	x = ninput;
	printf("%d\n", x);
	return 0;
}