#include<stdio.h>
int main()
{
	char str[5];	// 초기화 하면 쓰레기값 사라짐

	str[0] = '0';
	str[1] = 'K';
	str[2] = '\0';	// null 문자 -> 문자열 형태로 초기화 시키면 null 문자 안넣어도 됨

	printf("%s\n", str);	// null 문자가 없으면 쓰레기값 출력

	return 0;
}