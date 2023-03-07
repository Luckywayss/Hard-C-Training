#include <stdio.h>

int main(void)
{
	int array[5];	//입력 받을 다섯 개 숫자
	int MIN, MAX;	//최소값, 최대값
	int i;			//계수기

	for (i = 0; i < 5; ++i)
	{
		scanf_s("%d", &array[i]);
	}

	MIN = array[0];
	MAX = array[0];

	for (i = 0; i < 5; i++)
	{
		if (array[0] > array[i])
			MAX = array[0];
		else {
			array[0] = array[i];
			MAX = array[0];
		}
	}

	for (i = 0; i < 5; i++)
	{
		if (array[0] < array[i])
			MIN = array[0];
		else {
			array[0] = array[i];
			MIN = array[0];
		}
	}

	printf("MIN: %d, MAX: %d", MIN, MAX);

	return 0;
}