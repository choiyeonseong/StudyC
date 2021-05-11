/*
	로그인 프로그램
	1. id와 password를 저장하고 파일이름은 password.txt로 저장한다.
	2. 구조체 Login 변수에 id, password 멤버에 각각 저장을 시키고
	3. 키보드로 입력되는 id와 password를 비교하여
	"로그인되었습니다."/ "아이디를 찾을 수 없습니다." 메세지 출력
	작성일 : 5월 11일
*/

#include<stdio.h>
#include<string.h>

typedef struct
{
	char* id;
	char* pw;
}Login;

int main()
{
	Login me;
	FILE* fp;
	int res;
	char tmpid[20];
	char tmppw[20];
		
	// 1. 파일 read
	
	fp = fopen("password.txt", "r");
	
	if (fp == NULL)
	{
		printf("파일을 읽을 수 없습니다.\n");
		return 1;
	}

	while (1)
	{
		res = fscanf(fp, "%s%s", tmpid, tmppw);	// 자료형 형식에 맞게 입력

		if (res == EOF) break;
	}
	
	// 동적 할당
	me.id = (char*)malloc(strlen(tmpid));
	strcpy(me.id, tmpid);
	me.pw = (char*)malloc(strlen(tmppw));
	strcpy(me.pw, tmppw);

	fclose(fp);

	// 2. 키보드 입력
	printf("아이디 입력 \n$ ");
	gets(tmpid);
	printf("비밀번호 입력 \n$ ");
	gets(tmppw);

	// 3. 비교 & 메시지 출력
	if (strcmp(me.id, tmpid) == 0
		&& strcmp(me.pw, tmppw) == 0)
	{
		printf("로그인되었습니다.\n");
	}
	else
	{
		printf("id를 찾을 수 없습니다.\n");
	}

	return 0;
}

