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

// �����ͷ� ���ڿ��� �����ؼ� ���� �����ͷ� �������� �ּҸ� �Ѱ� ����
void swap_ptr(char** ppa, char** ppb)
{
	char* pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}