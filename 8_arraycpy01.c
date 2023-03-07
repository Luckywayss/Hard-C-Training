#include <stdio.h>

int main(void)
{
	int aList[5] = { 10, 20, 30, 40, 50 };
	int aListNew[5] = { 0 };
	int i = 0;

	//aListNew = aList; 배열 이름은 주소상수이기 때문에 l-value가 될 수 없다.
	//이와 같이 반복문으로 하나씩 복사해야 한다(혹은 메모리 복사).
	for (i = 0; i < 5; ++i)
		aListNew[i] = aList[i];

	for (i = 0; i < 5; ++i)
		printf("%d\t", aListNew[i]);
	putchar('\n');

	return 0;
}