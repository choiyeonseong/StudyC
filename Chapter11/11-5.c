#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);		// ctrl+z 입력하면 -1 반환
		if (res == EOF) break;		// -1 == EOF
		printf("%d ", ch);
	}
	return 0;
}