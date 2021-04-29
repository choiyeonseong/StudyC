#include<stdio.h>

void print_char(char, int);			// 함수 선언

int main()
{
	print_char('@', 5);				// 함수 호출

	return 0;
}

void print_char(char ch, int count)	// 매개변수는 있으나 반환값이 없다
{
	for (int i = 0; i < count; i++)
	{
		printf("%c", ch);
	}

	//return;	// 출력이 없으면 굳이 안써도 됨
}