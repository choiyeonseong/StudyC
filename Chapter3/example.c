// 이름 나이 주소
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

	char name[20];
	int age;
	char address[50];

	printf("이름을 입력하세요 : ");
	scanf("%s", name);

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	printf("주소를 입력하세요 : ");
	scanf("%s", address);
	//fgets(address, sizeof(address), stdin);


	printf("이름 : %s\n나이 : %d\n주소 : %s\n", name, age, address);

	return 0;
}