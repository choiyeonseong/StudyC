#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);		// ctrl+z �Է��ϸ� -1 ��ȯ
		if (res == EOF) break;		// -1 == EOF
		printf("%d ", ch);
	}
	return 0;
}