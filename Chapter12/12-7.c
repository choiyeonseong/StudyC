#include<stdio.h>

int main()
{
	char str[80] = "apple juice";	// 배열에 문자열 초기화
	char* ps = "banana";			// 포인터에 문자열 연결

	puts(str);			//자동 개행	// apple juice 출력하고 줄 바꿈
	fputs(ps, stdout);	//개행 안함	// banana만 출력
	puts("milk");					// banana에 이어 milk 출력

	return 0;
}