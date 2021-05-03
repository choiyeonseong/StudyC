#include<stdio.h>

void print_ary(int* pa);

int main()
{
	int ary[5] = { 10,20,30,40,50 };

	print_ary(ary);	// 배열명 자체가 주소이므로 그 값을 함수의 인수(포인터)로 주는것이 가능

	return 0;
}

void print_ary(int* pa)	// 매개변수로 포인터 선언
{
	for (int i = 0; i < 5; i++)
	{
		printf("배열 : %d ", pa[i]);	// 포인터를 배열처럼 사용
		printf("포인터 : %d \n", *(pa++));	// 위와 같은 결과 출력
	}
}