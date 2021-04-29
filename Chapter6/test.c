#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	printf("%d\n", 'a');
	printf("%c\n", 65);

	char ch = 'A';
	int a = 'a';

	if (a == 'A' || a== 'a') {
		printf("같다!!");

		return 0;

	}
	else {
		printf("다르다!!");
		return 0;
	}



	return 0;
}