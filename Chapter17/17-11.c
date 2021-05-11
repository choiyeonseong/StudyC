#include<stdio.h>

enum season { SPRING, SUMMER, FALL=100, WINTER };	// 열거형

int main()
{
	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING :
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("나의 레저 활동 => %s\n", pc);

	printf("%d\n", sizeof ss);	// enum의 크기는 4byte로 고정
	printf("%d %d %d %d\n", SPRING, SUMMER, FALL, WINTER);	// 정수화

	return 0;
}