#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()
{
	char input[100];

	int num[100];
	char* operator[100];

	fgets(input, sizeof(input), stdin);

	//puts(input);

	char* str = strtok(input, " ");

	while (str != NULL) {
		int i = 0;
		while (str[i] != '\0') 
		{
			if (isdigit(str[i++]) == 0)
			{
				printf("문자");
			}
			else
			{
				printf("숫자");
			}
		}
		
		printf("%s\n", str);
		str = strtok(NULL, " ");
	}
}