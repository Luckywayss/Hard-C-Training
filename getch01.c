#include <stdio.h>
//_getch() 함수를 사용하기 위한 헤더 파일 포함
#include <conio.h>

int main(void)
{
	//8비트 정수 자료형 char, 이름이 ch인 변수 선언 및 0으로 정의
	char ch = 0;
	//사용자에게 출력 할 메세지(문자열) 출력
	printf("아무 키나 누르면 다음으로 넘어갑니다.\n");
	//사용자로부터 키보드 입력을 한 번 받고, 사용자가 입력한 값을
	//_getch() 함수가 반환하면 이를 ch변수에 저장한다.
	ch = _getch();
	
	//사용자가 입력한 문자를 출력한다.
	printf("입력한 키는 ");
	putchar(ch);
	printf(" 입니다.\n");
	return 0;
}