#include <stdio.h>

int main(void)
{
	int x = 10;
	
	//int * int -> %d
	printf("%d\n", x * 10); 
	//int * double - > %d (��� �Ұ���)
	printf("%d\n", x * 10.0); 

	//int / int�� int �����̴�. �Ǽ��� �ƴ�!
	//��, �Ҽ��� ���ϴ� �����.
	printf("%d\n", x / 10);

	//�Ҽ��� ���ϰ� ����ǹǷ� ��ǻ� ���� 2�� %f�� ����ϴ� ���̴�.
	printf("%d\n", 5 / 2);
	//int / int�� int �����̹Ƿ� %f�� ����� �� ����.
	printf("%f\n", 5 / 2);

	//double / int�� double �����̴�.
	printf("%f\n", 5.0 / 2);
	return 0;
}