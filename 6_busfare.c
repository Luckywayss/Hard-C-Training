#include <stdio.h>

int main(void)
{
	int busfare = 0;
	int nAge = 0;
	
	printf("����� ���̴� : ");
	scanf_s("%d", &nAge);

	/*
	0~3��	������	������	100%(����)
	4~13��	���	������	50%
	14~19��	û�ҳ�	������	25%
	20��		����		������	0%
	*/

	if (nAge <= 3) busfare = 0; //������
	else{
		if (nAge <= 13) busfare = 1000 - 500; //���
		else {
			if (nAge <= 19) busfare = 1000 - 250; //û�ҳ�
			else busfare = 1000; //����
		}
	}

	printf("��� : %d", busfare);
	
	return 0;
}