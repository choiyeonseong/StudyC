/*
pointerExam.c

Date:2021-04-30
Author:홍길동

description :
1. 10 개의 정수를 입력받아 배열에 저장한다.
2. 배열을 출력한다.
3. 배열에 저장된 값을 9<->0, 8<->1,7<->2, ... 형태로
저장된 값을 교환한다.
4. 배열을 출력한다.

input_ary();
swap_ary();
print_ary();
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_ary(int* ary, int size);		// 입력받는 함수
void swap_ary(int* ary, int size);		// 교환 함수
void print_ary(int* ary, int size);		// 출력하는 함수

int main()
{
	int ary[10];
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);

	swap_ary(ary, size);

	print_ary(ary, size);
}

/*배열 사용*/
//void swap_ary(int* ary, int size)
//{
//	for (int i = size - 1; i >= (size / 2); i--)
//	{
//		int j = size - 1 - i;	// i=9, j=0
//
//		int tmp = ary[j];
//		ary[j] = ary[i];
//		ary[i] = tmp;
//	}
//}

/*포인터 사용*/
void swap_ary(int* ary, int size)
{
	for (int i = 0; i < (size / 2); i++)
	{
		int* first = &ary[0];
		int* last = &ary[9];

		int tmp = *(first + i);
		*(first + i) = *(last - i);
		*(last - i) = tmp;
	}
}

void input_ary(int* ary, int size)
{
	printf("10개의 정수를 입력하세요 :\n$");
	for (int i = 0; i < size; i++)
	{
		scanf("%d", &ary[i]);
	}
}

void print_ary(int* ary, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", ary[i]);
	}
}