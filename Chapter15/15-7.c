#include<stdio.h>
int sum(int, int);			// 함수선언

/*
포인터와 함수의 입력, 출력 자료형이 동일해야함
*/

int main()
{
	int (*fp)(int, int);	// 함수 포인터 선언, 함수 이름을 포인터로 나타냄
	int res;

	fp = sum;				// 함수명을 함수 포인터에 저장
	res = fp(10, 20);		// 함수 포인터로 함수 호출
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{
	return (a + b);
}