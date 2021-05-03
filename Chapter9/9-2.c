#include<stdio.h>
int main()
{
	int a;
	int* pa;	// * 기능 없는 표시, int형 포인터 변수

	pa = &a;	// 포인터에 a 시작주소 대입
	*pa = 10;	// 포인터로 변수 a에 10 대입, pa가 가르키는 곳의 데이터, 간접참조연산자

	printf("포인터로 a값 출력 : %d\n", *pa);
	printf("포인터값 = a의 시작주소값 출력 : %p\n", pa);
	printf("변수명으로 a값 출력 : %d\n", a);

	return 0;
}