/*
	�α��� ���α׷�
	1. id�� password�� �����ϰ� �����̸��� password.txt�� �����Ѵ�.
	2. ����ü Login ������ id, password ����� ���� ������ ��Ű��
	3. Ű����� �ԷµǴ� id�� password�� ���Ͽ�
	"�α��εǾ����ϴ�."/ "���̵� ã�� �� �����ϴ�." �޼��� ���
	�ۼ��� : 5�� 11��
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
		
	// 1. ���� read
	
	fp = fopen("password.txt", "r");
	
	if (fp == NULL)
	{
		printf("������ ���� �� �����ϴ�.\n");
		return 1;
	}

	while (1)
	{
		res = fscanf(fp, "%s%s", tmpid, tmppw);	// �ڷ��� ���Ŀ� �°� �Է�

		if (res == EOF) break;
	}
	
	// ���� �Ҵ�
	me.id = (char*)malloc(strlen(tmpid));
	strcpy(me.id, tmpid);
	me.pw = (char*)malloc(strlen(tmppw));
	strcpy(me.pw, tmppw);

	fclose(fp);

	// 2. Ű���� �Է�
	printf("���̵� �Է� \n$ ");
	gets(tmpid);
	printf("��й�ȣ �Է� \n$ ");
	gets(tmppw);

	// 3. �� & �޽��� ���
	if (strcmp(me.id, tmpid) == 0
		&& strcmp(me.pw, tmppw) == 0)
	{
		printf("�α��εǾ����ϴ�.\n");
	}
	else
	{
		printf("id�� ã�� �� �����ϴ�.\n");
	}

	return 0;
}

