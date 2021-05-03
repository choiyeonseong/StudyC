/*
	1. 로또 번호를 저장할수 있는 배열 선언
		- lotto[6]
	2. 로또번호 입력(동일한 번호가 입력시 에러 메세지를 출력하고 다시 입력 받으시오)
		- input_lotto(), print_lotto()
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int input_lotto(int* ary);
void print_lotto(int* ary);

/*배열 일괄 입력*/

int main()
{

	while (1) {
		int lotto[6] = { 0 };
	
		printf("lotto번호 6자리를 입력해주세요 : \n$");

		int result = input_lotto(lotto);

		if (result < 0)
		{
			printf("중복된 숫자가 존재합니다.\n");
			continue;
		}
		else
		{
			print_lotto(lotto);
			break;
		}
	}
}

int input_lotto(int* ary) {

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &ary[i]);
	}

	for (int j = 0; j < 6; j++) {
		int tmp = ary[j];
		for (int k = j+1; k < 6; k++) {
			if (tmp == ary[k])
			{
				return -1;
			}
		}
	}
	return 1;
}

void print_lotto(int* ary) {

	for (int i = 0; i < 6; i++) {
		printf("%d ", ary[i]);
	}
}