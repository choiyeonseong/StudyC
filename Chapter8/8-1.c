#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];

	scanf("%d", &ary[3]);

	printf("ary[2] : %d\n", ary[2]);
	printf("ary[3] : %d\n", ary[3]);
	printf("ary[4] : %d\n", ary[4]);	// 쓰레기값, 대입된 값이 없음
	
	return 0;
}