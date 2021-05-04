/////*
////회문
////0504
////*/
////
//#include<stdio.h>
//#include<string.h>
//
//int check(char* arr, int size);
//
//int main()
//{
//	//char* arr = malloc(sizeof(char) * 10);
//	char arr[80]; 
//
//	while (1) {
//		printf("문자열을 입력하세요 :\n$ ");
//
//		scanf("%s", arr);
//		if (strcmp(arr, "q") == 0) break;
//
//		if (check(arr, strlen(arr)) < 0) 
//		{
//			printf("회문이 아닙니다.\n");
//		}
//		else 
//		{
//			printf("회문입니다.\n");
//		}
//	}
//}
//
///// <summary>
///// 회문 검사
///// </summary>
///// <param name="arr"></param>
///// <param name="size"></param>
///// <returns>false -1, true 1</returns>
//int check(char* arr, int size)
//{
//	for (int i = 0; i < size / 2; i++)
//	{
//		if (arr[i] != arr[size - i - 1])
//		{
//			return -1;
//		}
//	}
//	return 1;
//}



#include<stdio.h>
#include<string.h>

int main()
{
	//char* arr = malloc(sizeof(char) * 10);
	char arr[80];

	printf("문자열을 입력하세요 :\n$ ");

	scanf("%s", arr);
	int size = strlen(arr);

	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - i - 1])
		{
			printf("회문이 아닙니다.\n");
			break;
		}
	}
	printf("회문입니다.\n");
}