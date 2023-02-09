#include <stdio.h>

#include <float.h> //실수자료형, 실수자료형 양수 최솟값, 최댓값이 정의된 헤더 파일

int main(void)
{
	double dData = 123.456;//실수자료형 유효 자릿수 소수점 이하 15자리, dData 변수명 지정, 123.456 상수 정의

	printf("%f\n", dData);//printf 함수에 관한 부분은 추후 공부 예정
	printf("%E - %E\n", DBL_MIN, DBL_MAX);//최소값, 최대값
	
	return 0;
}
