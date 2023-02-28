#include <stdio.h>

int main(void)
{
	int nInput = 10, nData;
	scanf_s("%d", &nInput);

	if (nInput == 90)
		nData = 10;
	else if (nInput == 50)
		nData = 5;
	else if (nInput == 10)
		nData = 1;
	else
		nData = 0;

	switch (nInput)
	{
	case 90:
		nData = 10;
		break;

	case 50:
		nData = 5;
		break;

	case 10:
		nData = 1;
		break;

	default:
		nData = 0;
	}
	
	return 0;
}