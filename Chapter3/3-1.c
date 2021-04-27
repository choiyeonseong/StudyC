#include<stdio.h>
int main() 
{
	int a, b, c;
	double da;
	char ch;

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n",a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);

	printf("-----자료형의 크기-----\n");
	printf("char 크기 : %d\n", sizeof(char));
	printf("int 크기 : %d\n", sizeof(int));
	printf("short 크기 : %d\n", sizeof(short));
	printf("long 크기 : %d\n", sizeof(long));
	printf("double 크기 : %d\n", sizeof(double));
	printf("long long 크기 : %d\n", sizeof(long long));

	return 0;
}