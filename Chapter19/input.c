#include<stdio.h>

extern int count;	// main.c에 선언된 변수 사용하겠다

int total = 0;

int input_data(void)
{
	int pos;

	while (1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);
		if (pos < 0) break;	// 양수가 아니면 종료
		count++;
		total += pos;
	}

	return total;
}