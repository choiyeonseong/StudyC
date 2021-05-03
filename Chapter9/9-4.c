#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	
	// const : 상수화
	// pa가 가리키는 변수 a는 pa를 간접참조하여 바꿀수 없음
	const int* pa = &a; // 포인터가 가리키는 곳의 데이터를 상수화
	
	int* const pb = &b;	// 포인터 자체를 상수화

	printf("변수 a 값 : %d\n", *pa);

	pa = &b;
	printf("변수 b 값 : %d\n", *pa);

	pa = &a;
	a = 20;
	printf("변수 a 값 : %d\n", *pa);

	//*pa = 30;	// 불가능 : *pa를 통해서 데이터값을 건드리지마라
	//printf("변수 a 값 : %d\n", *pa);

	//pb = &a;	// 불가능 : 포인터 자체를 상수화
	*pb = 25;	// 가능 : 데이터값 바꿀 수 있음
	printf("변수 pb 값 : %d\n", *pb);


	return 0;
}