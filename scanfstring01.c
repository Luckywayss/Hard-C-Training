#include <stdio.h>

int main(void)
{
	char szString[32] = { 0 };

	scanf_s("%s", &szString, sizeof(szString));
	printf("%s\n", szString);

	return 0;
}