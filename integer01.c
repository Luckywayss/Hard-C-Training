#include <stdio.h> /*전처리기 호출 표준입출력 헤더 파일 <stdio.h> 선언*/

int main(void)/*int 32비트 정수자료형, main 변수 선언 및 호출자 함수, 아래의 함수를 호출한다. (void) 정의 없음.*/
{
	char ch = 'A';/*character 8비트 정수자료형, ch 변수 선언, 'A' 데이터 정의*/
	wchar_t  wch = L'A';/*wchar_t 16비트 정수자료형, wch 변수 선언, L'A' 문자 상수(wchar_t 자료형은 문자 상수 앞에 L 표시) 데이터 정의*/
	short int aData = 10;/* 16비트 정수자료형 int 생략 가능, aData 변수 선언, 10 정수 데이터 정의*/
	int bData = 10;/*32비트 정수자료형, bData 변수 선언, 10 정수 데이터 정의*/
	long cData = 10L;/*윈도우 기준 32비트 정수자료형, cData 변수 선언, 10L 정수 데이터 정의 및 long 자료형 사용시 L 접미사*/
	long int cbData = 10L;/*윈도우 기준 32비트 정수자료형 int 생략 가능, cbData 변수 선언, 10L 정수 데이터 정의*/
	long long int ccbData = 10LL;/*64비트 정수자료형, ccbData 변수 선언, 10LL 정수 데이터 정의*/

	unsigned char New_ch = 0;/*8비트 부호 없는 자료형, New_ch 변수 선언, 0 정수 데이터 정의*/
	unsigned short aNewData = 65535U;/*16비트 부호 없는 자료형, aNewData 변수 선언, 65535U 정수 데이터 정의 접미사 'U'*/
	unsigned int bNewData = 4294967295U;/*32비트 부호 없는 자료형, bNewData 변수 선언, 4294967295U 정수 데이터 정의 접미사 'U'*/
	unsigned long int lbNewData = 4294967295UL;/*32비트 부호 없는 자료형, lbNewData 변수 선언, 4294967295U 정수 데이터 정의 접미사 'UL'*/
	unsigned long long int llbNewData = 18446744073709551615ULL;/*64비트 부호 없는 자료형, llbNewData 변수 선언, 정수 데이터 정의 접미사 'ULL'*/

	unsigned long long int lloNewData = -18446744073709551615ULL;/*64비트 부호 없는 자료형, lloNewData 변수 선언, 부호 있는 정수 데이터 정의 접미사 'ULL', 부호 없는 자료형이나 부호 있는 데이터로 인해 오류 발생*/
	unsigned short oNewData = 655355U;/*16비트 부호 없는 자료형, oNewData 변수 선언, 655355U 정수 데이터 정의 접미사 'U', 용량 초과 오류 발생*/
	
	return 0;
}
