#include<stdio.h>

void add_ten(int a);
void addp_ten(int a);

int main()
{
	int a = 10;

	add_ten(a);			// a���� �����Ͽ� ����
	//addp_ten(&a);		// a�� �ּҸ� ����S

	printf("a : %d\n", a);

	return 0;
}

/* 13-6.c */
void add_ten(int a)		// call by value
{
	a = a + 10;
}

/* 13-7.c */
void addp_ten(int* pa)	// call by reference
{
	*pa = *pa + 10;
}
