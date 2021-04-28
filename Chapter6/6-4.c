#include<stdio.h>

/*****피라미드 출력*****/

int main()
{
	int i, j, max = 12;

	for (i = 0; i < max; i++)
	{
		for (j = i; j < max - 1; j++)
		{
			printf(" ");
		}

		for (j = 0; j <= i * 2; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	for (i = max - 1; i > 0; i--)
	{
		for (j = i - 2; j < max - 2; j++)
		{
			printf(" ");
		}

		for (j = 0; j < i * 2 - 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}