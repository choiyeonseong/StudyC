#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);	// "apple-pie"에서 5문자만 복사

	printf("%s\n", str);

	return 0;
}