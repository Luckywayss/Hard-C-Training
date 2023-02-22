#include <stdio.h>

int main(void)
{
	int nData = 0x11223344;

	printf("%08X\n", nData & 0x00FFFF00);	//AND ��
	printf("%08X\n", nData | 0x2211FFFF);	//OR ��
	printf("%08X\n", nData ^ 0X2211FFFF);	//XOR ��
	printf("%08X\n", ~nData);				//NOT �ݴ�
	printf("%08X\n", nData >> 8);			//Shift Right
	printf("%08X\n", nData << 16);			//Shift Left

	return 0;
}