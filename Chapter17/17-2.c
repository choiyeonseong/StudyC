#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;	// �ڱ�Ұ��� ���� ������
};

int main()
{
	struct profile seong;

	strcpy(seong.name, "�ֿ���");
	
	seong.age = 25;
	seong.height = 159;
	seong.intro = (char*)malloc(80);
	
	printf("�ڱ�Ұ� : ");
	gets(seong.intro);

	printf("�̸� : %s\n", seong.name);
	printf("���� : %d\n", seong.age);
	printf("Ű : %.1lf\n", seong.height);
	printf("�ڱ�Ұ� : %s\n", seong.intro);

	free(seong.intro);

	return 0;
}