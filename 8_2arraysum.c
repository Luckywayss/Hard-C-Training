#include <stdio.h>

int main(void)
{
	//추가 변수 선언 금지, 예시 코드 기반 작성
	int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int i = 0, j = 0;

	//여기에 들어갈 코드를 작성합니다.
	for (i = 0; i < 3; ++i)	//행의 계수기 반복문
	{
		for (j = 0; j < 4; ++j)	//열의 계수기 반복문
		{
			if (i <= 1) 
			{
				if (j < 3)
				{
					aList[i][3] += aList[i][j];
				}
			}
			if (i >= 2)
			{
				aList[i][j] = aList[0][j] + aList[1][j];
			}

			printf("%d\t", aList[i][j]);
		}

		putchar('\n');
	}
	return 0;
}

/*

출력 예 :
	10 20 30 60
	40 50 60 150
	50 70 90 210

*/
