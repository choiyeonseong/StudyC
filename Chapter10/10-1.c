#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ary[3];

	*(ary + 0) = 10;	// ary[0]
	
	*(ary + 1) = *(ary + 0) + 10;

	printf("세번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);

	for (int i = 0; i < 3; i++) 
	{
		printf("%5d", *(ary + i));
	}

	return 0;
}