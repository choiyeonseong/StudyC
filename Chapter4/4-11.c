#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	int res;

	/*****ÄŞ¸¶ ¿¬»êÀÚ*****/
	res = (++a, ++b);

	printf("a : %d, b : %d\n", a, b);
	printf("res : %d\n", res);

	return 0;
}