#include<stdio.h>
#include"user.h"

int main()
{
	int n1, n2;
	int result;
	input_data(&n1,&n2);
	result = sum(n1,n2);
	printf("합 : %d\n", result);

	return 0;
}

// SDL 검사 : 아니요