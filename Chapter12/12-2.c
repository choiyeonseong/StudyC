#include<stdio.h>

int main()
{
	char* dessert = "apple";

	printf("오늘 후식은 %s입니다.\n", dessert);
	/*
	* 위 함수의 동작 방식
	while (*dessert != '\0')
	{
		putchar(*dessert);
		dessert++;
	}
	*/

	dessert = "banana";
	printf("내일 후식은 %s입니다.\n", dessert);

	return 0;
}