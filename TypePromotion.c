#include <stdio.h>

int main(void)
{
	char ch = 'A';

	printf("%c\n", ch);

	printf("%c\n", ch + 1); //char + int = int
	printf("%c\n", 'A' + 2);

	printf("%f\n", 5.0 + 2); //double + int = double
	printf("%d\n", 5.0 + 2); //ºÒ°¡´É
	return 0;
}