#include<stdio.h>

int main(int argc, char* argv[]) // 운영체제에서 함수 직접 입력
{
	int i;

	printf("입력 갯수 : %d", argc);

	for (int i = 0; i < argc; i++)
	{
		printf("%d번째 입력된 값 : %s\n", i, argv[i]);
	}

	return 0;
}