#include<stdio.h>

void swap(int* a, int* b);

int main()
{
	int a = 10;
	int b = 20;
	printf("swap 전 - a : %d, b : %d\n", a, b);
	
	swap(&a, &b);	// 주소값을 매개변수로 넘겨줌
	printf("swap 후 - a : %d, b : %d\n", a, b);
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}