#include <stdio.h>

/* 배열 출력 */

int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };

	int size = sizeof(ary) / sizeof(ary[0]);

	for (int i = size - 1; i >= 0; i--)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	return 0;
}