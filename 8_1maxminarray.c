#include <stdio.h>

int main(void)
{
	int array[5];	//�Է� ���� �ټ� �� ����
	int MIN, MAX;	//�ּҰ�, �ִ밪
	int i;			//�����

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