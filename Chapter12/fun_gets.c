#include<stdio.h>

void my_gets(char* ps);

int main()
{
	int i = 0;		
	char str[20];	
	char ch;	// 임시 변수

	// 메인에서 gets수행
	do {
		ch = getchar();
		str[i] = ch;
		i++;
	} while (ch != '\n');	// 입력한 문자가 개행이면 종료

	str[i] = '\0';
	
	//my_gets(str);	//함수로 gets수행

	printf("결과 : %s",str);

	return 0;
}

void my_gets(char* ps)	// ps는 첫번째 배열 요소를 가리킨다
{
	char ch;

	while ((ch = getchar()) != '\n')	// 입력한 문자가 개행문자가 아닌 동안 반복
	{
		*ps = ch;	
		ps++;
	}
	*ps = '\0';
}