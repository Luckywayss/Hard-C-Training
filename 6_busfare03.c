#include <stdio.h>

int main(void)
{
	int nFare = 1000, nAge = 0;
	double nRate = 0.0;

	scanf_s("%d", &nAge);
	if (nAge < 14)
	{
		if (nAge < 4)	nRate = 0.0;
		else			nRate = 0.5;
	}
	else
	{
		if (nAge < 20)	nRate = 0.75;
		else			nRate = 1.0;
	}

	printf("최종요금: %d원\n", (int)(nFare * nRate));
	return 0;
}