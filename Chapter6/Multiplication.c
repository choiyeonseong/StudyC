#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0;
	do {
		printf("������ �� ��?\n$");
		scanf("%d", &a);

		printf("%d�� ����!\n", a);

		for (int i = 1; i < 10; i++)
		{
			printf("%d x %d = %d\n", a, i, a * i);
		}
	} while (a > 0 && a < 10);

	return 0;
}