#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int score[5];
	int i;
	int total = 0;
	double avg;

	// i값을 배열의 첨자로 활용
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];	// 총합
	}

	avg = total / 5.0;		// 평균

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);	// %5d : 소수점 위 5자리 수 출력
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}