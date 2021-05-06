#include<stdio.h>

void swap_ptr(char** ppa, char** ppb);

int main()
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}

// 포인터로 문자열을 선언해서 이중 포인터로 포인터의 주소를 넘겨 받음
void swap_ptr(char** ppa, char** ppb)
{
	char* pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}