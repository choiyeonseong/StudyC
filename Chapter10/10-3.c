#include<stdio.h>

int main()
{
	/*포인터를 이용한 배열의 값 출력*/
	int ary[3] = { 10,20,30 };
	int* pa = ary;

	printf("배열의 값 : ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}