#include<stdio.h>

int main()
{
	int ary[3];
	int* pa = ary;	// 포인터에 배열명 저장

	*pa = 10;				// 첫번째 배열 요소 *(pa+0)
	
	*(pa + 1) = 20;			// 두번째 배열 요소
	
	pa[2] = pa[0] + pa[1];	// 세번째 배열 요소

	for (int i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}

	return 0;
}