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

/*배열 한개씩 입력*/

int main()
{
	int lotto[6] = { 0 };

	printf("lotto번호 6자리를 입력해주세요 : \n$");

	input_lotto(lotto);

	print_lotto(lotto);
}

int input_lotto(int* ary) {

	int flag = 1;	// 중복이면 -1, 중복 없으면 1
	int tmp;
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &tmp);

		if (tmp < 0 || tmp > 45)
		{
			printf("!lotto 숫자 범위가 아닙니다.\n");
			continue;
		}

		if (i == 0)	// 첫번째 숫자 입력
		{
			ary[i] = tmp;
		}
		else if (i > 0) {	// 두번째 숫자부터
			for (int j = 0; j < i; j++) {	// 중복 숫자 확인
				if (tmp == ary[j])
				{
					printf("!중복된 숫자가 존재\n");
					i--;
					break;
				}
				else {
					ary[i] = tmp;
				}
			}
		}
	}
}

void print_lotto(int* ary) {

	printf("응모 번호 :\n$ ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", ary[i]);
	}
}