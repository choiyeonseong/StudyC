#include<stdio.h>

int main()
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);	// 화이트스페이스를 데이터로 입력하지 않고 건너뜀
	
	//fflush(fp);	// 파일 포인터를 인수로 주면 파일 포인터와 연결된 스트림 파일의 버퍼를 비움
	while (fgetc(fp) != '\n');	// 정수입력후 문자를 입력했을때 문자를 무시

	fgets(name, sizeof(name), fp);	//개행문자가 나올때 까지 문자열 입력

	printf("나이 : %d, 이름 : %s", age, name);
	fclose(fp);

	return 0;
}