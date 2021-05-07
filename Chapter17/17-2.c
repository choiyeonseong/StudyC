#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;	// 자기소개를 위한 포인터
};

int main()
{
	struct profile seong;

	strcpy(seong.name, "최연성");
	
	seong.age = 25;
	seong.height = 159;
	seong.intro = (char*)malloc(80);
	
	printf("자기소개 : ");
	gets(seong.intro);

	printf("이름 : %s\n", seong.name);
	printf("나이 : %d\n", seong.age);
	printf("키 : %.1lf\n", seong.height);
	printf("자기소개 : %s\n", seong.intro);

	free(seong.intro);

	return 0;
}