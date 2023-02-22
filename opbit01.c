#include <stdio.h>

int main(void)
{
	int nData = 0x11223344;

	printf("%08X\n", nData & 0x00FFFF00);	//AND 곱
	printf("%08X\n", nData | 0x2211FFFF);	//OR 합
	printf("%08X\n", nData ^ 0X2211FFFF);	//XOR 비등가
	printf("%08X\n", ~nData);				//NOT 반대
	printf("%08X\n", nData >> 8);			//Shift Right
	printf("%08X\n", nData << 16);			//Shift Left

	return 0;
}