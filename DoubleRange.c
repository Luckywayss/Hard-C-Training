#include <stdio.h>

#include <float.h> //�Ǽ��ڷ���, �Ǽ��ڷ��� ��� �ּڰ�, �ִ��� ���ǵ� ��� ����

int main(void)
{
	double dData = 123.456;//�Ǽ��ڷ��� ��ȿ �ڸ��� �Ҽ��� ���� 15�ڸ�, dData ������ ����, 123.456 ��� ����

	printf("%f\n", dData);//printf �Լ��� ���� �κ��� ���� ���� ����
	printf("%E - %E\n", DBL_MIN, DBL_MAX);//�ּҰ�, �ִ밪
	return 0;
}