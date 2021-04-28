#include <stdio.h>

int main()
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof a);			// 4 : int
	printf("double형 변수의 크기 : %d\n", sizeof(b));		// 8 : double
	printf("정수형 상수의 크기 : %d\n", sizeof(10));		// 4 : int -> 상수의 크기가 커지면 8바이트가 되기도 함
	printf("수식의 결괏값의 크기 : %d\n", sizeof (1.5+3.4));	// 8 : double -> 정수 연산식이면 4바이트가 되기도함
	printf("char 자료형의 크기 : %d\n", sizeof(char));		// 1 : char

	return 0;
}