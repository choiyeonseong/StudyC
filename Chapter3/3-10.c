#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.", age, height);

	return 0;
}