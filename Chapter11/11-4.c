#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char ch;
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}

	return 0;
}